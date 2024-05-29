#ifndef NOCAP_SYNDROME_STRATEGY_H
#define NOCAP_SYNDROME_STRATEGY_H


#include "DiseaseStrategy.h"

class NocapSyndromeStrategy : public DiseaseStrategy {
public:
    virtual const void calculateAlertLevel(const Vitals* v, Patient* p) override;
};

#endif