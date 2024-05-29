#ifndef TICCTOCC_BRAIN_DAMAGE_STRATEGY_H
#define TICCTOCC_BRAIN_DAMAGE_STRATEGY_H


#include "DiseaseStrategy.h"

class TicctoccBrainDamageStrategy : public DiseaseStrategy {
public:
    virtual const void calculateAlertLevel(const Vitals* v, Patient* p) override;

};

#endif