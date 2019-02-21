int divisibleSumPairs(int arr[],int arrlen,int k);
#include<iostream>
using namespace std;
int main()
{
    int arrlen;
    cin>>arrlen;
    int arr[arrlen],k;
    cin>>k;
    for(int index=0;index<arrlen;index++)
    {
        cin>>arr[index];
    }
    int result=divisibleSumPairs(arr,arrlen,k);
    cout<<result<<endl;
}

int divisibleSumPairs(int arr[],int arrlen,int k)
{
    int counter=0;

    for(int index=0;index<arrlen;index++)
    {
        for(int index2=0;index2<arrlen;index2++)
        {
            if(index<index2)
            {
            int arrSum=0;
            arrSum=arr[index]+arr[index2];
            if(arrSum%k==0)
            {
                counter++;
            }
            }
        }

    }

    return counter;
}
