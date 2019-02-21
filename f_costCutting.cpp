#include<iostream>
using namespace std;
int main()
{
    int testCase,a,b,c;
    cin>>testCase;
    for(int index=0;index<testCase;index++)
    {
        int median;
        cin>>a>>b>>c;

        int max1=max(a,b);
        int max2=max(b,c);
        int maximum=max(max1,max2);
        cout<<"minimum "<<minimum<<" Maximum "<<maximum<<endl;

    }
    return 0;
}
