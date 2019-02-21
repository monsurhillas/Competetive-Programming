#include<iostream>
using namespace std;
int main()
{
    int testCase,numberOne,numberTwo;
    cin>>testCase;
    while(testCase--)
    {
        cin>>numberOne>>numberTwo;
        if(numberTwo%numberOne==0)
        {
            cout<<numberOne<<" "<<numberTwo<<endl;
        }
        else cout<<"-1"<<endl;

    }
    return 0;
}
