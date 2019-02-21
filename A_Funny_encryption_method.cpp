#include<iostream>
using namespace std;
int main()
{
   int testCase;
   cin>>testCase;
   while(testCase-->0)
   {
       int n,m,a=0;
       cin>>n;
       m=n;
       while(m>0)
       {
           a+=m%2;
           m/=2;
       }
      int i=0,b=0;
        while(n>0)
        {
            i=n%10;
            if(i==1||i==2||i==4||i==8)
            b++;
            else if(i==3||i==5||i==6||i==9)
            b+=2;
            else if(i==7)
            b+=3;
            n/=10;
        }
        cout<<a<<" "<<b<<endl;
    }
}

