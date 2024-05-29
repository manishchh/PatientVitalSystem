#include "TicctoccBrainDamage.h"

const void TicctoccBrainDamageStrategy::calculateAlertLevel(const Vitals* v, Patient* p)  {

    if (p->age() < 35 && v->BA() < 10) {
        p->setAlertLevel(AlertLevel::Red);
    }
    else if (p->age() >= 35 && v->BA() < 20) {
        p->setAlertLevel(AlertLevel::Red);
    }
    else {
        p->setAlertLevel(AlertLevel::Green);
    }
} 
