#include<iostream>
using namespace std;
int GCD(int i,int j);
int main()
{
    int i,j,G,n=0;
    while(cin>>n)
    {
        if(n==0)
        break;
        G=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                G+=GCD(i,j);
            }
        }
       cout<<G<<endl;
    }

      return 0;
}

int GCD(int i,int j)
{
    if(j==0) return i;
    else return GCD(j,i%j);

}
