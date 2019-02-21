#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase-->0){
        int n,r;
        cin>>n;
        char a[n];
        cin>>a;
        int m[3]={0};
        for(int i=0;i<n;i++){
            if(a[i]=='R')
                m[0]++;
            else if(a[i]=='G')
                m[1]++;
            else
                m[2]++;
        }
        int m1=0;
        for(int i=0;i<3;i++){
            if(m[i]>m1)
                m1=m[i];
        }
        r=n-m1;
        cout<<r<<endl;
    }
    return 0;
}
