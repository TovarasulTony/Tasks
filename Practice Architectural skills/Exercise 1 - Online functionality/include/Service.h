#ifndef SERVICE_H
#define SERVICE_H

#include "Info.h"
#include "Persist.h"
#include<memory>

using namespace std;

class Service
{
    public:
        void DoStuff();

    private:
        virtual void HandleStuff() = 0;

    protected:
        unique_ptr<Persist> mPersist;
};

#endif // SERVICE_H
