
#include<iostream>
using namespace std;
int main()
{
    int testCase,valueOne,valueTwo,sum=0;
    cin>>testCase;
    for(int index=0;index<testCase;index++)
    {
        cin>>valueOne;
        cin>>valueTwo;
        sum=valueOne+valueTwo;
        cout<<"Case "<<index+1<<":"<<" "<<sum<<endl;
    }
}
