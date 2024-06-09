#include "AmogusSusStrategy.h"
#include "Patient.h"
#include "Vitals.h"

AlertLevel AmogusSusStrategy::calculateAlertLevel(const Vitals& v, Patient& p) {
    
    if (v.HR() > 220) {
        return AlertLevel::Red;
    }
    else if (v.HR() > 210) {
        return AlertLevel::Orange;
    }
    else if (v.HR() > 200) {
        return AlertLevel::Yellow;
    }
    else {
        return AlertLevel::Green;
    }
    
}