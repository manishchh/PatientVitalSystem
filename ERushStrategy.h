#ifndef E_RUSH_STRATEGY_H
#define E_RUSH_STRATEGY_H


#include "DiseaseStrategy.h"

class ERushStrategy : public DiseaseStrategy {
public:
    virtual const void calculateAlertLevel(const Vitals* v, Patient* p) override;
};

#endif