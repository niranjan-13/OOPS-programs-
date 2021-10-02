#include<iostream>
using namespace std ;

class Base
{
    public :
     void show()
    {
        
    }

};
class Child : public Base
{
    public :
    void show()
    {
        cout<<"Child show content , It is a child"<<endl;
    }
};
int main()
{

    Child obj;
    obj.show();

    return 0;
}