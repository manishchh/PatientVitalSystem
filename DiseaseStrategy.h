#ifndef DISEASE_STRATEGY_H
#define DISEASE_STRATEGY_H

#include "PatientAlertLevels.h"
#include "Vitals.h"
#include "Patient.h"

class DiseaseStrategy {
public:
    virtual ~DiseaseStrategy() = default;
    virtual const void calculateAlertLevel(const Vitals* v, Patient* p) = 0;
};

#endif