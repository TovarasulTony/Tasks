#ifndef USERDATAPERSISTENCE_H
#define USERDATAPERSISTENCE_H

#include "Persist.h"

class UserDataPersistence: public Persist
{
    public:
        UserDataPersistence();
        virtual ~UserDataPersistence();

    protected:

    private:
        void HandlePersistData(int)override;
};

#endif // USERDATAPERSISTENCE_H
