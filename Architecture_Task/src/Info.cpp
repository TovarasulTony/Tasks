#include "Info.h"
/*
Info::Info()
{
    //ctor
}

Info::~Info()
{
    //dtor
}
*/
Info* Info::instance = nullptr;

void Info::Instantiate()
{
    if(!instance)
    {
        instance = new Info();
    }
}
