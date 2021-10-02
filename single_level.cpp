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
class Child : public Base
{
   
};
int main()
{

Child obj ;
obj.show();

    return 0;
}