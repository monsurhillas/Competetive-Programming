#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    for(int row = 0; row<size;row++)
    {
            for(int secondRow=size;secondRow>row;secondRow--)
            {
                cout<<" ";
            }
            for(int printHash=0;printHash<(row+1);printHash++)
            {
                cout<<"#";
            }
            cout<<endl;
    }
}
