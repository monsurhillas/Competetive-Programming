#include<iostream>
using namespace std;
int main()
{
   unsigned int n,k,sum=0;
    cin>>n>>k;
    while(n-->0)
    {
        long long int t;
        cin>>t;

        if(t%k==0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
