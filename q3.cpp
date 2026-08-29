#include <iostream>
using namespace std;

class Student
{
    public:
    int id , age ;
    double cgpa;
    Student(int a , int b , double cg) { id = a ; age = b ; cgpa = cg ;}
    Student(){}
    double getCG(){return cgpa;}
    int getID() { return id; }

};

int main()
{
    int n = 3;
    Student s[n];
    for (int i = 0 ;  i < n ; i++)
    {
        cout << "Student " << i+1 << endl ;
        cout << "ID , Age , CG : " << endl ;
        cin >> s[i].id ;
        cin >> s[i].age ;
        cin >> s[i].cgpa ;
    }
    double hcg = s[0].cgpa;
    int hid = s[0].id;
    for (int i = 0 ;  i < n ; i++)
    {
        if(s[i].cgpa >hcg)
        {
            hcg = s[i].cgpa;
            hid = s[i].id;
        }
    }

    cout << "Highest ID : " << hid;

}
