#ifndef BUTTON_H
#define BUTTON_H

#include "Service.h"

class Button
{
    public:
        void ButtonPressed();

    private:
        //virtual void HandleButtonPresed() = 0;

    protected:
        Service* mService;
};

#endif // BUTTON_H
