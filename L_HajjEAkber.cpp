#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    for(int index=1;;index++)
    {
        cin>>s;
        if(s=="Hajj") cout<<"Case "<<index<<": Hajj-e-Akbar"<<endl;
        else if(s=="Umrah") cout<<"Case "<<index<<": Hajj-e-Asghar"<<endl;
        else if (s=="*") break;
    }


}
