#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Marks:"<<endl;
    cin>>marks;
    if(marks>=81 && marks<=100)
    {
        cout<<"Very Good";
    }
    else if (marks>=61 && marks<=80)
    {
        cout<<"Good";
    }
    else  if  (marks>=41 && marks<=60)
    {
        cout<<"Average";
    }
    else{
        cout<<"fail";
    }
}
