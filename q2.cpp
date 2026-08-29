#include <iostream>
using namespace std;

namespace BAUST
{
class CSE
{
public:
    string name;
    int age;

    CSE(string a,  int b )
    {
        name = a ;
        age  = b ;
    }
};
}

namespace NIGGA
{
class CSE
{
public:
    string name;
    int age;

    CSE(string a,  int b )
    {
        name = a ;
        age  = b ;
    }
};
}


int main()
{
    BAUST :: CSE obj1("Prince", 20 );
    NIGGA :: CSE obj2("NIgga" , 10 );
    cout << obj1.name << endl ;
    cout << obj1.age << endl;
     cout << obj2.name << endl ;
    cout << obj2.age << endl;
}

