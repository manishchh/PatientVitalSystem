#include "NocapSyndromeStrategy.h"


const void NocapSyndromeStrategy::calculateAlertLevel(const Vitals* v,Patient* p) {

    if (v->SPO2() < 90) {
        p->setAlertLevel(AlertLevel::Red);
    }
    else if (v->SPO2() < 92) {
        p->setAlertLevel(AlertLevel::Orange);
    }
    else if (v->SPO2() < 94) {
        p->setAlertLevel(AlertLevel::Yellow);
    }
    else {
        p->setAlertLevel(AlertLevel::Green);
    }
}
