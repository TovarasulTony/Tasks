#ifndef SERVERCOMMUNICATION_H
#define SERVERCOMMUNICATION_H
#include "Enums.h"

class ServerCommunication
{
    public:
        static ServerCommunication& GetInstance();
        ServerCommunication();
        virtual ~ServerCommunication();
        int RequestWeather();
        int RequestLocation(LOCATIONS);

    protected:

    private:
};

#endif // SERVERCOMMUNICATION_H
