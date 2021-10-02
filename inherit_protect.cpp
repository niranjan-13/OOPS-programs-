#include<iostream>
using namespace std ;

class Base
{
    protected:
    int x=6;
};
class Child : protected Base
{
    public:
    void display()
    {
        cout<<"Value is "<<x;
    }
};
int main()
{

Child obj ;
obj.display();

    return 0;
}