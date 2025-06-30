#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    if(a<b && a<c)
    {
        cout<<"A is smallest";
    }
    else if(b<c && b<a)
    {
        cout<<"B is smallest";
    }
    else
    {
        cout<<"c is smallest";
    }
}