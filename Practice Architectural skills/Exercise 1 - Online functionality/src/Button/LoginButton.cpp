#include "LoginButton.h"
#include "LoginService.h"

#include<iostream>
#include<memory>

using namespace std;

LoginButton::LoginButton()
{
    mService = make_unique<LoginService>();
}
/*
void LoginButton::HandleButtonPresed()
{
    cout<<"Login Button was Pressed"<<endl;
}
*/
