#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character:"<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        cout<<"character is  vowel"<<endl;
    }
    else
    {
         cout<<"Character is consonant"<<endl;
    }
}