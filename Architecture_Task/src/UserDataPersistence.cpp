#include "UserDataPersistence.h"
#include<iostream>
using namespace std;
UserDataPersistence::UserDataPersistence()
{
    //ctor
}

UserDataPersistence::~UserDataPersistence()
{
    //dtor
}

void UserDataPersistence::HandlePersistData(int _data)
{
    //persisted
    cout<<"Data Persisted: "<<_data<<endl;
}
