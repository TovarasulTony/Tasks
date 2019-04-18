#include <iostream>
using namespace std;



//*********** Static Lib Beg
//must include header to use type form lib
#include <AwesomeClass.h>

namespace test
{
    extern int SampleAddInt(int i1, int i2);
}

void static_lib_example()
{
    awesome_library::AwesomeClass obj;
    cout<<test::SampleAddInt(2,8)<<endl;
    cout << obj.GetAwesomeNumber() << endl;
}
//*********** Static Lib End



int main()
{
    static_lib_example();
    return 0;
}
