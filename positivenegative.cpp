#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    if(num>0)
    {
        cout<<"Number is positive"<<endl;
    }
    else if(num==0)
    {
        cout<<"Number is zero"<<endl;
    }
    else
    {
         cout<<"Number is negative"<<endl;
    }
}