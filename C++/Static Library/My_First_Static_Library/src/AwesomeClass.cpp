#include "AwesomeClass.h"

#include <iostream>
namespace awesome_library
{
    AwesomeClass::AwesomeClass()
    {
        //ctor
    }

    AwesomeClass::~AwesomeClass()
    {
        //dtor
    }

    int AwesomeClass::GetAwesomeNumber()
    {
        std::cout<<"Come get your own magic number TODAY!!!"<<std::endl;
        int awesomeNumber = 11223344;
        return awesomeNumber;
    }
}
