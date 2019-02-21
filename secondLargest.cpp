#include<iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;

    for(int index=0;index<testCase;index++)
    {
        int one,two,three,max=0,min=1000000;
        cin>>one>>two>>three;
        if(one>max) max=one;
        if(two>max) max=two;
        if(three>max) max=three;
        if(one<min) min=one;
        if(two<min) min=two;
        if(three<min) min=three;

        if(one!=max && one!=min) cout<<one<<endl;
        else if(two!=max && two!=min) cout<<two<<endl;
        else if(three!=max && three!=min) cout<<three<<endl;
    }
}
