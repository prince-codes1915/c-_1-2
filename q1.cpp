#include <iostream>
using namespace std;

class Number
{
    int x;
    double y;
public:
    Number(int a , float b = 0 ){ x = a ; y = b ;}
    Number(){x = 0 ; y = 0 ;}
    void Show();
};

void Number::Show()
{
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl ;
}


int main()
{
    Number obj1(0);
    Number obj2;
    Number obj3(10, 20.50);
    obj1.Show();
    obj2.Show();
    obj3.Show();
}
