#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int sm,f,v;
         for(int i=0;i<s.length();i++)
       {
           v=s.at(i);
            if(s.at(i)>=97 && s.at(i)<=122)
            {
                v-=96;
            }
            if(s.at(i)>=65 && s.at(i)<=90)
            {
                v-=38;
            }
            sm+=v;
            v=0;
       }
       for(int i=2;i<sm;i++)
       {
           if(sm%i==0) f=1;
       }
       if(f==1) cout<<"It is not a prime word."<<endl;
       else cout<<"It is a prime word."<<endl;

    }
}
