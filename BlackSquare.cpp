#include<iostream>
#include<String.h>
using namespace std;
int main()
{
    int calOne,calTwo,calThree,calFour;
    cin>>calOne>>calTwo>>calThree>>calFour;
    string s;
    cin>>s;
    int len = s.length();
    int array[len];
   for(int index=0;index<len;index++)
   {
       array[index]=int(s.at(index));
   }
    int sum=0;
    for(int index=0;index<len;index++)
    {
        if(int(array[index])==49) sum+=calOne;
        else if(int(array[index])==50) sum+=calTwo;
        else if (int(array[index])==51) sum+=calThree;
        else if(int(array[index])==52) sum+=calFour;
    }
    cout<<sum<<endl;
}
