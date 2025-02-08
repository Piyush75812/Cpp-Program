#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter principle,rate,amount"<<endl;
    cin>>p;
    cin>>r;
    cin>>t;
    si=p*r*t/100;
    cout<<"Simple Intrest ="<<si<<endl;
}
