#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    int counter=0;
    for(int index=0;index<n;index++)
    {
     cin>>array[index];

    }
    int tempCount=0,tempTwo=0;
    for(int index=1;index<n;index+=2)
    {

        counter=tempTwo-counter;
        int temp=array[index];
        if(array[index]==-1) counter++;
        if(array[index]==temp) tempCount++;
        tempTwo=temp;
    }

    cout<<counter<<endl;
}
