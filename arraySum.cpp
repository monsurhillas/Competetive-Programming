#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size],sum=0;
    for(int index=0;index<size;index++)
    {
        cin>>array[index];
        sum+=array[index];
    }
    cout<<sum<<endl;
}
