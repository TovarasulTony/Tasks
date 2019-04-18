#ifndef LOCATIONSERVICE_H
#define LOCATIONSERVICE_H

#include "Service.h"
#include "Enums.h"
#include"ServerCommunication.h"

class LocationService: public Service
{
    public:
        LocationService();
        virtual ~LocationService();
        void SetLocations(LOCATIONS);

    protected:

    private:
        void HandleStuff()override;

    private:
        LOCATIONS mLocations = LOCATIONS::INVALID;
};

inline void LocationService::SetLocations(LOCATIONS _locations)
{
    mLocations = _locations;
}

#endif // LOCATIONSERVICE_H
