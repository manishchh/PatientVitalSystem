#ifndef AMOGUS_SUS_STRATEGY_H
#define AMOGUS_SUS_STRATEGY_H

#include "PatientAlertLevels.h"
#include "DiseaseStrategy.h"

class AmogusSusStrategy : public DiseaseStrategy {
public:
    AlertLevel calculateAlertLevel(const Vitals& v, const Patient& p) override;
};

#endif