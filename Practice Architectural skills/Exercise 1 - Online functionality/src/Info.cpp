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
/*
void Info::Instantiate()
{
    if(!instance)
    {
        instance = new Info();
    }
}
*/

Info& Info::GetInstance()
{
    static Info instance;
    return instance;
}
