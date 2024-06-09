#include "TicctoccBrainDamage.h"
#include "Patient.h"
#include "Vitals.h"

AlertLevel TicctoccBrainDamageStrategy::calculateAlertLevel(const Vitals& v, Patient& p)  {
    if ((p.age() < 35 && v.BA() < 10) || (p.age() >= 35 && v.BA() < 20)) {
        return AlertLevel::Red;
    }
    else {
        return AlertLevel::Green;
    }
} 
