#include "ERushStrategy.h"

const void ERushStrategy::calculateAlertLevel(const Vitals* v, Patient* p) {
    
    if (v.BT() > 38 || v.BA() > 110) {
        return AlertLevel::Red;
    }
    else if (v.BT() > 38 || v.BA() > 100) {
        return AlertLevel::Yellow;
    }
    else {
        return AlertLevel::Green;
    }
}