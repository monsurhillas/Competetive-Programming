#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int matrix[size][size];
    for(int indexOne=0;indexOne<size;indexOne++)
    {
        for(int indexTwo=0;indexTwo<size;indexTwo++)
        {
            cin>>matrix[indexOne][indexTwo];
        }
    }

    //first Diagonal summision
    int sumDiagonalOne=0;
    for(int indexOne=0,indexTwo=0;indexOne<size &&indexTwo<size;indexOne++,indexTwo++)
    {
        sumDiagonalOne+=matrix[indexOne][indexTwo];

    }
    //second Diagonal sumission
    int sumDiagonalTwo=0;
    for(int indexOne=0,indexTwo=size-1;indexOne<size &&indexTwo>=0;indexOne++,indexTwo--)
    {
        sumDiagonalTwo+=matrix[indexOne][indexTwo];
    }
    int netSum;
    if(sumDiagonalOne>=sumDiagonalTwo) netSum=sumDiagonalOne-sumDiagonalTwo;
    else netSum=sumDiagonalTwo-sumDiagonalOne;
    cout<<netSum<<endl;


}
