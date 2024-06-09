#include "PatientFileLoader.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#include "Patient.h"
#include "Vitals.h"

PatientFileLoader::PatientFileLoader(const std::string& file) :
    _file(file)
{
}

std::vector<Patient*> PatientFileLoader::loadPatientFile()
{
    std::vector<Patient*> patients;

    std::ifstream inFile(_file);
    if (inFile.is_open()) {
        // TODO: load your file here
        std::string line;
        while (std::getline(inFile, line)) {
            if (line.empty()) continue;

            std::istringstream lineStream(line);
            std::string uid, dob, fullName, conditions, vitalsData;
            std::getline(lineStream, uid, '/');
            std::getline(lineStream, dob, '/');
            std::getline(lineStream, fullName, '/');
            std::getline(lineStream, conditions, '/');
            std::getline(lineStream, vitalsData);

            size_t commaPos = fullName.find(',');
            std::string firstName = fullName.substr(commaPos + 1);
            std::string lastName = fullName.substr(0, commaPos);

            std::tm birthday = {};
            std::istringstream dobStream(dob);
            dobStream >> std::get_time(&birthday, "%d-%m-%Y");

            Patient* patient = new Patient(firstName, lastName, birthday);
            patient->setCalculateAlertLevel(false);

            std::istringstream condStream(conditions);
            std::string condition;
            while (std::getline(condStream, condition, ',')) {
                patient->addDiagnosis(condition);
            }

            std::istringstream vitalsStream(vitalsData);
            std::string vitalsString;
            while (std::getline(vitalsStream, vitalsString, ';')) {
                std::istringstream singleVitalsStream(vitalsString);
                int hr, spo2, bt, ba;
                char delim;
                singleVitalsStream >> hr >> delim >> spo2 >> delim >> bt >> delim >> ba;
                Vitals* vitals = new Vitals(hr, spo2, bt, ba);
                patient->addVitals(vitals);
            }

            patient->setCalculateAlertLevel(true);
            patients.push_back(patient);
        }
    }
    return patients;
}