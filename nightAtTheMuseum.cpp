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
   int differ=0,differTwo=0,differThree=0,mainDiffer=array[0]-98;
   if(mainDiffer>12) mainDiffer=24-mainDiffer;
   cout<<"maind "<<mainDiffer<<endl;

   for(int index=1;index<len;index++)
   {


       differ = array[index-1]-array[index];
       differTwo=(122-array[index-1])+(array[index]-97);
       differThree=(122-array[index])+(array[index-1]-97);
       if(differTwo>=26) differTwo=differThree;
       else if(differThree>=26) differTwo=differTwo;
       differTwo+=1;

       differ = abs(differ);
       differ+=1;
       if(differTwo>=differ)
       {
           mainDiffer+=differ;
           //cout<<mainDiffer<<endl;
       }
       else {
            mainDiffer+=differTwo;
       //cout<<mainDiffer<<endl;
       }
   }
   cout<<mainDiffer<<endl;

}
