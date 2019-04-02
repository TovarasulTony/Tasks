#ifndef SERVICE_H
#define SERVICE_H

#include "Info.h"
#include "Persist.h"

class Service
{
    public:
        void DoStuff();

    private:
        virtual void HandleStuff() = 0;

    protected:
        Persist* mPersist;
};

#endif // SERVICE_H
