#include "DiseaseContext.h"

const void DiseaseContext::set(std::shared_ptr<DiseaseStrategy> strategy)
{
    _strategy = strategy;
}

const void DiseaseContext::calculateAlertLevel(const Vitals* v, Patient* p) const
{
    _strategy->calculateAlertLevel(v, p);
}
