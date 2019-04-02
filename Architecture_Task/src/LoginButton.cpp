#include "LoginButton.h"
#include "LoginService.h"

#include<iostream>

using namespace std;

LoginButton::LoginButton()
{
    mService = new LoginService();
}
/*
void LoginButton::HandleButtonPresed()
{
    cout<<"Login Button was Pressed"<<endl;
}
*/
