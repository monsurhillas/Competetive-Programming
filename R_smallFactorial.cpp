int factorial(int number);
#include<iostream>
using namespace std;
int main()
{
    int t,a,r=1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        r=factorial(a);
        cout<<r<<endl;
    }

}

int factorial(int number)
{
    if(number==0)
        return 1;
    else return (number*factorial(number-1));
}
