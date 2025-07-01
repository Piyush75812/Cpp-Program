#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter Cost Price"<<endl;
    cin>>cp;
    cout<<"Enter Selling Price"<<endl;
    cin>>sp;
    if(cp<sp)
    {
        cout<<    "_____Profit_____"   <<   sp-cp   <<endl;
    }
    else if(cp==sp)
    {
        cout<<"No Profit No Loss"<<endl;
    
    }
    else
    {
        cout<<    "____Loss_____" <<  cp-sp   <<endl;
    
    }
}