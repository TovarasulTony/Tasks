#ifndef LOGINSERVICE_H
#define LOGINSERVICE_H

#include "Service.h"
#include "CredentialsValidator.h"
#include "EncryptionMaster.h"

class LoginService: public Service
{
    public:
        LoginService();
    private:
        void HandleStuff()override;

    private:
        CredentialsValidator mCredentialsValidator;
        EncryptionMaster mEncryptionMaster;
};

#endif // LOGINSERVICE_H
