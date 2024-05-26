#ifndef TICCTOCC_BRAIN_DAMAGE_STRATEGY_H
#define TICCTOCC_BRAIN_DAMAGE_STRATEGY_H

#include "PatientAlertLevels.h"
#include "DiseaseStrategy.h"

class TicctoccBrainDamageStrategy : public DiseaseStrategy {
public:
    AlertLevel calculateAlertLevel(const Vitals& v, const Patient& p) override;

};

#endif