#include<iostream>
using namespace std ;

class Base
{
    public :
    void show()
    {
        cout<<"Base content"<<endl;
    }
};
class Child1 : public Base
{
    public :
    void display()
    {
        cout<<"Child1 Content"<<endl;
    }
};
class Child2 : public Child1
{
    public :
    void oop()
    {
        cout<<"Content in Child 2";
    }
};


int main()
{

Child2 obj ;
obj.show();
obj.display();
obj.oop();

    return 0;
}