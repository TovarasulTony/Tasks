#include "ParkingButton.h"

using namespace std;
ParkingButton::ParkingButton()
{
    unique_ptr<LocationService> locationService = make_unique<LocationService>();
    locationService->SetLocations(LOCATIONS::PARKING);
    mService = std::move(locationService);
}

ParkingButton::~ParkingButton()
{
    //dtor
}
