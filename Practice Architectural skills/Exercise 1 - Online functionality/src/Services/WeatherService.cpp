#include "WeatherService.h"
#include <iostream>
#include "ServerCommunication.h"

using namespace std;

WeatherService::WeatherService()
{
    //ctor
}

WeatherService::~WeatherService()
{
    //dtor
}

void WeatherService::HandleStuff()
{
    cout<<"The weather is: "<<ServerCommunication::GetInstance().RequestWeather()<<endl;;
}
