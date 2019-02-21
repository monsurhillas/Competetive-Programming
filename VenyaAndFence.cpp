#include<iostream>
using namespace std;
int main()
{
    int num,height,perHeight;
    int counter=0;
    cin>>num;
    cin>>height;
    for(int index=0;index<num;index++)
    {
        cin>>perHeight;
        if(perHeight<=height) counter++;
        else if(perHeight>height && perHeight<=height*2) counter+=2;
    }
    cout<<counter<<endl;
}
