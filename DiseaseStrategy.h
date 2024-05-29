#ifndef DISEASE_STRATEGY_H
#define DISEASE_STRATEGY_H

#include "PatientAlertLevels.h"
class Vitals;
class Patient;

class DiseaseStrategy {
public:
    virtual ~DiseaseStrategy() = default;
    virtual void const calculateAlertLevel(const Vitals* v, Patient* p) = 0;
};

#endif