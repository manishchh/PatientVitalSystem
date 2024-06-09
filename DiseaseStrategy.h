#ifndef DISEASE_STRATEGY_H
#define DISEASE_STRATEGY_H

class Patient;
class Vitals;
#include "PatientAlertLevels.h"

class DiseaseStrategy {
public:
    virtual ~DiseaseStrategy() = default;
    virtual AlertLevel calculateAlertLevel(const Vitals& v, Patient& p) = 0;
};

#endif