#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cin>>s;
   int len = s.length();
   char array[len];
   for(int index=0;index<len;index++)
   {
       array[index]=s.at(index);
   }
   int differ=0,mainDiffer=array[0]-97;
   if(mainDiffer>13) mainDiffer=26-mainDiffer;


   for(int index=1;index<len;index++)
   {
       differ = array[index-1]-array[index];
       differ=abs(differ);
       if(differ>13) differ=26-differ;
       mainDiffer+=differ;
   }
   cout<<mainDiffer<<endl;

}
