#include "CompositeDiseaseStrategy.h"
#include <algorithm>
#include "Patient.h"
#include "Vitals.h"

void CompositeDiseaseStrategy::addStrategy(std::unique_ptr<DiseaseStrategy> strategy) {
    _strategies.push_back(std::move(strategy));
}

AlertLevel CompositeDiseaseStrategy::calculateAlertLevel(const Vitals& v, Patient& p) {
    // Logic to calculate the highest alert level based on all strategies
    AlertLevel highestAlertLevel = AlertLevel::Green;
    for (const auto& strategy : _strategies) {
        AlertLevel strategyAlertLevel = strategy->calculateAlertLevel(v, p);
        if (strategyAlertLevel > highestAlertLevel) {
            highestAlertLevel = strategyAlertLevel;
        }
    }
    return highestAlertLevel;
}