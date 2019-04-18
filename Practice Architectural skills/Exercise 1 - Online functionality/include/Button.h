#ifndef BUTTON_H
#define BUTTON_H

#include "Service.h"
#include <memory>
#include "Enums.h"

using namespace std;

class Button
{
    public:
        void ButtonPressed();

    private:
        //virtual void HandleButtonPresed() = 0;

    protected:
        unique_ptr<Service> mService;
};

#endif // BUTTON_H
