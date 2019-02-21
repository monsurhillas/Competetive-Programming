#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int testCase,a,b;
    cin>>testCase;
    for(int index=0;index<testCase;index++)
    {
        cin>>a>>b;
        if(a>b) cout<<">"<<endl;
        else if (a<b) cout<<"<"<<endl;
        else if (a==b) cout<<"="<<endl;
    }
    return 0;
}
