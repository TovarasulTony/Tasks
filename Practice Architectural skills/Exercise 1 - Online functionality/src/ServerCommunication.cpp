#include "ServerCommunication.h"

ServerCommunication::ServerCommunication()
{
    //ctor
}

ServerCommunication::~ServerCommunication()
{
    //dtor
}

ServerCommunication& ServerCommunication::GetInstance()
{
    static ServerCommunication instance;
    return instance;
}

int ServerCommunication::RequestWeather()
{
    return 6;
}

int ServerCommunication::RequestLocation(LOCATIONS _locations)
{
    return _locations == LOCATIONS::PARKING ? 2 : 3;
}
