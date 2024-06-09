#ifndef HOSPITAL_OBSERVER_H
#define HOSPITAL_OBSERVER_H

#include "Observer.h"
#include "HospitalAlertSystemFacade.h"


class HospitalObserver : public Observer
{
public:
    HospitalObserver(HospitalAlertSystemFacade* hospitalAlertSystemFacade);
    virtual void send(Patient* p) override;
private:
    HospitalAlertSystemFacade* _hospitalAlertSystemFacade;
};

#endif