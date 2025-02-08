#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"ENTER AGE TO CHECK YOU ARE ELIGIBLE OR NOT ELIGIBLE FOR VOTE:"<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"You Are Eligible For Vote"<<endl;
    }
    
    else
    {
        cout<<"You Are Not Eligible For Vote";
    }
}