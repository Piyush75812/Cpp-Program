#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"Character is lowercase"<<endl;
    }
    else if(ch>='A'&& ch<='Z')
    {
        cout<<"Character is uppercase"<<endl;
    }
    else if(ch>='0'&& ch<='9')
    {
        cout<<"character is numeric "<<endl;
    }
    else{
        cout<<"this is special character"<<endl;
    }
}