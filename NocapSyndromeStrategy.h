#ifndef NOCAP_SYNDROME_STRATEGY_H
#define NOCAP_SYNDROME_STRATEGY_H

#include "PatientAlertLevels.h"
#include "DiseaseStrategy.h"

class NocapSyndromeStrategy : public DiseaseStrategy {
public:
    AlertLevel calculateAlertLevel(const Vitals& v, const Patient& p) override;
};

#endif