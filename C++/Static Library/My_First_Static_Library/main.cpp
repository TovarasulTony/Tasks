#include <iostream>
#include "AwesomeClass.h"
using namespace std;

//namespace for methods
namespace test
{
    __declspec(dllexport)int SampleAddInt(int i1, int i2)
    {
        cout<<"Se intampla ceva"<<endl;
        return i1 + i2;
    }
}
