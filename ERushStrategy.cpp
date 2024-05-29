#include "ERushStrategy.h"

const void ERushStrategy::calculateAlertLevel(const Vitals* v, Patient* p) {
    
    if (v->BT() > 38 || v->BA() > 110) {
        p->setAlertLevel(AlertLevel::Red);
    }
    else if (v->BT() > 38 || v->BA() > 100) {
        p->setAlertLevel(AlertLevel::Yellow);
    }
    else {
        p->setAlertLevel(AlertLevel::Green);
    }
}