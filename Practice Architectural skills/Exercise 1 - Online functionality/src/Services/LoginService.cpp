#include "LoginService.h"
#include <iostream>
#include "UserDataPersistence.h"
#include<memory>
using namespace std;

LoginService::LoginService()
{
    mPersist = make_unique<UserDataPersistence>();
}
/*
LoginService::~LoginService()
{
    //dtor
}
*/

void LoginService::HandleStuff()
{
    int credentials = Info::GetInstance().GetCredentials();

    cout<<"Handle Login"<<endl;
    cout<<"Credentials: "<<credentials<<endl;

    bool isDataValid = mCredentialsValidator.ValidateCredentials(credentials);
    cout<<"Data is "<<(isDataValid ? "valid" : "invalid")<<endl;

    if(!isDataValid)
    {
        //notify user
        return;
    }

    int encryption = mEncryptionMaster.Encrypt(credentials);

    cout<<"Encrypted credentials: "<<encryption<<endl;

    mPersist->PersistData(encryption);

}
