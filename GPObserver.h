#ifndef GP_OBSERVER_H
#define GP_OBSERVER_H

#include "Observer.h"
#include "GPNotificationSystemFacade.h"


class GPObserver : public Observer
{
public:
    GPObserver(GPNotificationSystemFacade* gpNotificationSystemFacade);
    virtual void send(Patient* p) override;

private:
    GPNotificationSystemFacade* _gpNotificationSystemFacade;
};

#endif