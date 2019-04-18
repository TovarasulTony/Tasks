#include <iostream>
#include "LoginButton.h"
#include "Info.h"
#include <memory>
#include "WeatherButton.h"
#include "ParkingButton.h"

using namespace std;

int main()
{
    //Button* obj = new LoginButton();
    unique_ptr<Button> loginButton = make_unique<LoginButton>();
    unique_ptr<Button> weatherButton = make_unique<WeatherButton>();
    unique_ptr<Button> parkingButton = make_unique<ParkingButton>();

    loginButton->ButtonPressed();
    cout<<endl;
    weatherButton->ButtonPressed();
    cout<<endl;
    parkingButton->ButtonPressed();


    return 0;
}
