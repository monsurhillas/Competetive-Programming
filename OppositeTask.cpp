#include<iostream>
using namespace std;
int main()
{
    int testCase,tot_prob;
    cin>>testCase;
    for(int index=0;index<testCase;index++)
    {
        cin>>tot_prob;
        int temp_total=tot_prob;
        int firstnum=temp_total/2;
        int lastnum=tot_prob-firstnum;
        cout<<firstnum<<" "<<lastnum<<endl;
    }
    return 0;
}
