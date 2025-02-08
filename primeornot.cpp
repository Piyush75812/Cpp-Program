#include<iostream>
using namespace std;
int main()
{
    int num,i=2;
    cout<<"enter any number:"<<endl;
    cin>>num;
    while(i<=num)
    {
        if(num % i == 0)
        {
        cout<<" Number is not prime for" <<i<<endl;
        }
        else
        {
          cout<<"number is prime for" << i <<endl;
        }
        i=i+1;

    }
}