#include <iostream>
#include "LoginButton.h"
#include "Info.h"

using namespace std;

int main()
{
    Info::Instantiate();
    Button* obj = new LoginButton();

    obj->ButtonPressed();

    return 0;
}
