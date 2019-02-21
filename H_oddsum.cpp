
#include<iostream>
using namespace std;
int main()
{
    int testCases,lowlimit,highlimit;
    cin>>testCases;
    for(int index=0;index<testCases;index++)
    {
        int sum=0;
        cin>>lowlimit>>highlimit;
        int templowlimit=lowlimit;
        if((templowlimit%2)!=0)
        {
            for(int index2=lowlimit;index2<=highlimit;index2+=2)
            {
                sum=sum+index2;
            }
        }
        else if((templowlimit%2)==0)
        {
            lowlimit+=1;
            for(int index3=lowlimit;index3<=highlimit;index3+=2)
            {
                sum=sum+index3;
            }

        }
        cout<<"Case "<<index+1<<": "<<sum<<endl;
    }
}
