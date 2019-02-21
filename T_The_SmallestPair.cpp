#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long minimum=arr[0]+arr[1];
            cout<<minimum<<endl;
    }
}
