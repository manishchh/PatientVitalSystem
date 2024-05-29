#ifndef DISEASE_CONTEXT_H
#define DISEASE_CONTEXT_H

#include <memory>
#include "DiseaseStrategy.h"

//Context class for patient diseases alert level
class DiseaseContext
{
public:
    const void set(std::shared_ptr<DiseaseStrategy> strategy);
    const void calculateAlertLevel(const Vitals* v, Patient* p) const;
private:
    std::shared_ptr<DiseaseStrategy> _strategy;
};

#endif