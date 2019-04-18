#include "LocationService.h"
#include<memory>
#include<iostream>
using namespace std;

LocationService::LocationService()
{
    //ctor
}

LocationService::~LocationService()
{
    //dtor
}

void LocationService::HandleStuff()
{
    switch(mLocations)
    {
    case LOCATIONS::INVALID:
        cout<<"Location invalid"<<endl;
        break;
    case LOCATIONS::PARKING:
        cout<<"Parking result: "<<ServerCommunication::GetInstance().RequestLocation(LOCATIONS::PARKING)<<endl;
        break;
    case LOCATIONS::FUEL:
        cout<<"Fuel result: "<<ServerCommunication::GetInstance().RequestLocation(LOCATIONS::FUEL)<<endl;
        break;
    default:
        cout<<"Location not known"<<endl;
        break;
    }
}
