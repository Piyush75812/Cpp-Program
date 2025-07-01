#include<iostream>
using namespace std;
int main()
{
    int Ram,Shyam,Ajay;
    cout<<"Enter Age To Check Youngest In Three:"<<endl;
    cin>>Ram>>Shyam>>Ajay;
    if(Ram<Shyam && Ram<Ajay)
    {
       cout<<"Ram Age Is Youngest";
    }
    else if(Shyam<Ajay && Shyam<Ram)
    {
        cout<<"Shyam Age Is Youngest";
    }
    else
    {
        cout<<"Ajay Age Is Youngest";
    }
}