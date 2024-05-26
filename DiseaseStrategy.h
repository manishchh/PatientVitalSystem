#ifndef DISEASE_STRATEGY_H
#define DISEASE_STRATEGY_H

#include "PatientAlertLevels.h"
class Vitals;
class Patient;

class DiseaseStrategy {
public:
    virtual ~DiseaseStrategy() = default;
    virtual AlertLevel calculateAlertLevel(const Vitals& v, const Patient& p) = 0;
};

#endif