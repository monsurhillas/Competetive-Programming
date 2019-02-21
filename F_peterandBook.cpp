
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,j=0;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }


    for(;sum<=n;j++)
    {
       sum=sum+arr[j];
      if(j==6) j = -1;
       if(sum>=n)
        {
        cout<<j+1;
        break;

        }

   }

    return 0;
}
