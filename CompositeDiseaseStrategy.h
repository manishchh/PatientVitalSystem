#ifndef COMPOSITE_DISEASE_STRATEGY_H
#define COMPOSITE_DISEASE_STRATEGY_H

#include "DiseaseStrategy.h"
#include <vector>
#include <memory>

class CompositeDiseaseStrategy : public DiseaseStrategy {
public:

    void addStrategy(std::unique_ptr<DiseaseStrategy> strategy);
    virtual AlertLevel calculateAlertLevel(const Vitals& v, Patient& p) override;

private:
    std::vector<std::unique_ptr<DiseaseStrategy>> _strategies;
};

#endif 