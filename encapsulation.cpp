#include<iostream>
using namespace std ;
class Myclass
{

private:
string Name ;
int Marks ;
float Grade;

public:
void set(string n,int m,float g)
{
    Name = n;
    Marks = m;
    Grade = g;
}
void get()
{
    cout<< Name<<endl;
    cout<< Marks<<endl;
    cout<< Grade<<endl;
}

};


int main()
{
    Myclass obj;
    obj.set("Simha",99,9.4);
    obj.get();



    return 0;
}