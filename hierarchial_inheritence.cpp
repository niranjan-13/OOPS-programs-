#include<iostream>
using namespace std ;

class Base1
{
    public :
    void show()
    {
        cout<<"Base1 content"<<endl;
    }
};
class Child1 : public Base1
{

};

class Child2 : public Base1
{
   
};


int main()
{

Child1 obj ;
obj.show();
Child2 obj2;
obj2.show();

    return 0;
}