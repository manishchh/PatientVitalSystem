#ifndef E_RUSH_STRATEGY_H
#define E_RUSH_STRATEGY_H

#include "PatientAlertLevels.h"
#include "DiseaseStrategy.h"

class ERushStrategy : public DiseaseStrategy {
public:
    AlertLevel calculateAlertLevel(const Vitals& v, const Patient& p) override;
};

#endif