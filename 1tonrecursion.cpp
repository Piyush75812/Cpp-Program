#include<iostream>
using namespace std;
int oneton(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        oneton(n-1);
        cout<<n;

    }
}
int main()
{
    int n;
    cout<<"Enter Any Number To Print 1 To N :"<<endl;
    cin>>n;
    oneton(n);

}