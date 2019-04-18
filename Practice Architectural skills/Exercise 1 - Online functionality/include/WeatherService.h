#ifndef WEATHERSERVICE_H
#define WEATHERSERVICE_H
#include "Service.h"
#include "Enums.h"

class WeatherService: public Service
{
    public:
        WeatherService();
        virtual ~WeatherService();

    protected:

    private:
        void HandleStuff()override;
};

#endif // WEATHERSERVICE_H
