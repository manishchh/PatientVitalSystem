#ifndef AMOGUS_SUS_STRATEGY_H
#define AMOGUS_SUS_STRATEGY_H


#include "DiseaseStrategy.h"

class AmogusSusStrategy : public DiseaseStrategy {
public:
    virtual void const calculateAlertLevel(const Vitals* v, Patient* p) override;
};

#endif