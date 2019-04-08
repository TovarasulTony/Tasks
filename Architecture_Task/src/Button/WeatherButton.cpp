#include "WeatherButton.h"
#include "WeatherService.h"
#include<memory>

using namespace std;

WeatherButton::WeatherButton()
{
    mService = make_unique<WeatherService>();
}

WeatherButton::~WeatherButton()
{
    //dtor
}
