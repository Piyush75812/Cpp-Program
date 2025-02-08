#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year to check leap year or not:"<<endl;
    cin>>year;
    if(year % 400 == 0)
    {
        cout<<"year is leap year "<<endl;
    }
    else if(year % 100 == 0)
    {
        cout<<"year is leap year "<<endl;
    }
    else if(year % 4 == 0)
    {
        cout<<"year is leap year"<<endl;
    }
    else
    {
        cout<<"year is not leap year"<<endl;
    }
}