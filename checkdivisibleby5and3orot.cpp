#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Any Number :";
    cin>>num;
    if(num % 5 == 0 && num % 3 == 0)
    {
        cout<<"Number Is Divisible By 5 and 3"<<endl;
    }
    else
    {
        cout<<"Number Is Not Divisible By 5 and 3"<<endl;
    }
 
}