#include "NocapSyndromeStrategy.h"


const void NocapSyndromeStrategy::calculateAlertLevel(const Vitals* v,Patient* p) {

    if (v.SPO2() < 90) {
        return AlertLevel::Red;
    }
    else if (v.SPO2() < 92) {
        return AlertLevel::Orange;
    }
    else if (v.SPO2() < 94) {
        return AlertLevel::Yellow;
    }
    else {
        return AlertLevel::Green;
    }
}
