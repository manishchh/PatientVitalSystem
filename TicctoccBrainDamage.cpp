#include "TicctoccBrainDamage.h"
#include "Vitals.h"
#include "Patient.h"

AlertLevel TicctoccBrainDamageStrategy::calculateAlertLevel(const Vitals& v, const Patient& p)  {

    if (p.age() < 35 && v.BA() < 10) {
        return AlertLevel::Red;
    }
    else if (p.age() >= 35 && v.BA() < 20) {
        return AlertLevel::Red;
    }
    else {
        return AlertLevel::Green;
    }
} 