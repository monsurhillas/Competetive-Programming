#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cin>>size;
    long int givenArray[size];
    for(int index=0;index<size;index++)
    {
        cin>>givenArray[index];
    }
    long long int sum=0;
    for(int index=0;index<size;index++)
    {
        sum+=givenArray[size];
    }
    cout<<sum<<endl;

}
