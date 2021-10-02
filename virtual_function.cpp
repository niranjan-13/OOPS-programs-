#include<iostream>
using namespace std ;

class Base
{
    public :
    virtual void show()
    {
        cout<<"Base show content"<<endl;
    }
     void display()
    {
        cout<<"Base Display content"<<endl;
    }
};
class Child : public Base
{
    public :
    void show()
    {
        cout<<"Child show content"<<endl;
    }
    void display()
    {
        cout<<"Child display Content";
    }
    
};
int main()
{
    Base *a;
    Child obj;
    a=&obj;
    a ->show();
    a ->display();
    



    return 0;
}