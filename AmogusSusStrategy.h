#ifndef AMOGUS_SUS_STRATEGY_H
#define AMOGUS_SUS_STRATEGY_H


#include "DiseaseStrategy.h"

class AmogusSusStrategy : public DiseaseStrategy {
public:
    virtual const void calculateAlertLevel(const Vitals* v, Patient* p) override;
};

#endif