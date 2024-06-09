#include "PatientFileLoaderAdapter.h"

// Initialization file loading class
PatientFileLoaderAdapter::PatientFileLoaderAdapter() :
    _patientFileLoader(std::make_unique<PatientFileLoader>())
{
}

void PatientFileLoaderAdapter::initialiseConnection()
{
    // do nothing
}

void PatientFileLoaderAdapter::loadPatients(std::vector<Patient*>& patientIn)
{
    // load file content
    std::vector<Patient*> patientTemp = _patientFileLoader->loadPatientFile();

    // Append data to vector
    //patientIn.insert(patientIn.end(), patientTemp.begin(), patientTemp.end());
    // Append data to vector
    for (Patient* item : patientTemp)
    {
        patientIn.push_back(item);
    }
}

void PatientFileLoaderAdapter::closeConnection()
{
    // do nothing
}