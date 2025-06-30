#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three Number "<<endl;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a  && c+a>b)
    {
        cout<<"Triangle Is Valid"<<endl;
    }
    else
    { 
        cout<<"Triangle Is Not Valid"<<endl;

    }
}