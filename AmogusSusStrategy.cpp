#include "AmogusSusStrategy.h"



const void AmogusSusStrategy::calculateAlertLevel(const Vitals* v, Patient* p) {
    
    if (v->HR() > 220) {
        p->setAlertLevel(AlertLevel::Red);
    }
    else if (v->HR() > 210) {
        p->setAlertLevel(AlertLevel::Orange);
    }
    else if (v->HR() > 200) {
        p->setAlertLevel(AlertLevel::Yellow);
    }
    else {
        p->setAlertLevel(AlertLevel::Green);
    }
    
}