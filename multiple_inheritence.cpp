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
class Base2
{
    public :
    void get()
    {
        cout<<"Base2 content"<<endl;
    }
};

class Child : public Base1,public Base2 
{
    public :
    void set()
    {
        cout<<"Content in Child 2";
    }
};


int main()
{

Child obj ;
obj.show();
obj.get();
obj.set();

    return 0;
}