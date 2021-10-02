#include<iostream>
using namespace std ;
class Myclass
{
public:
string Name ;
int Age ;
float Grade ;
};


int main()
{
    Myclass obj;
    obj.Age =34;
    obj.Name="Simha";
    obj.Grade=8.9;

    cout<<obj.Name<<endl;
    cout<<obj.Age<<endl;
    cout<<obj.Grade<<endl;


    return 0;
}