#include<iostream>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    for(int index=0;index<testcases;index++)
    {
        int studentNumber;
        cin>>studentNumber;
        int arr[studentNumber];
        for(int index2=0;index2<studentNumber;index2++)
        {
            cin>>arr[index2];
        }
        int maximum=0;
        for(int index3=0;index3<studentNumber;index3++)
        {
           if(arr[index3]>=maximum) maximum=arr[index3];

        }
        cout<<"Case "<<index+1<<": "<<maximum<<endl;
    }
    return 0;
}
