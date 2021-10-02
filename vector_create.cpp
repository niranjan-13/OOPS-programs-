#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v2)
{
    for(int i = 0;i<v2.size();i++)
    {
        cout<<v2[i]<<"\t";
    }
};

int main()
{
    int i;
    vector<int> v1;
    cout<<"Size of V before elements "<<v1.size()<<endl;
    cout<<"Enter elements : "<<endl;
    int x;
    for(i=1;i<=10;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    cout<<"size of vectors after elements :"<<v1.size()<<endl;
    display(v1);





    return 0;
}
