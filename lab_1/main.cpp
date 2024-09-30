#include <iostream>
using namespace std;
int main()
{
    
    cout <<" bool               1 byte  "<< endl ;
    cout <<" short              2 byte  "<< endl ;
    cout <<" int                4 byte  "<< endl ;
    cout <<" unsigned int       8 byte  "<< endl ;
    cout <<" long long          4 byte  "<< endl ;
    cout <<" unsigned long long 4 byte  "<< endl ;
    cout <<" char               1 byte  "<< endl ;
    cout <<" float              4 byte  "<< endl ;
    cout <<" double             8 byte  "<< endl ;
    cout <<" long double        1 byte  "<< endl ;
    cout <<" \n\n "<< endl ;
   
    float a1 = 15.3f;
    float a2 = 786.44f;
    cout << "float " << "1 byte " << a1 << " + "  << a2 << " = " << a1 + a2 <<" \n\n"<< endl ;

    int var1=20;
    int var2=var1+10;
    cout << "var1+10=";
    cout << var2 << endl;
    cout <<" \n\n"<< endl ;

    return 0;
}
