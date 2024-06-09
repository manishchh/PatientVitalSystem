#ifndef PATIENT_FILE_LOADER_ADAPTER_H
#define PATIENT_FILE_LOADER_ADAPTER_H

#include "AbstractPatientDatabaseLoader.h"
#include "PatientFileLoader.h"
#include <vector>
#include <memory>

class PatientFileLoaderAdapter : public AbstractPatientDatabaseLoader {
public:
    PatientFileLoaderAdapter();
    virtual void initialiseConnection() override;
    virtual void loadPatients(std::vector<Patient*>& patientIn) override;
    virtual void closeConnection() override;

private:
    std::unique_ptr<PatientFileLoader> _patientFileLoader;
};

#endif