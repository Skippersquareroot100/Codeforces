#include<bits/stdc++.h>
using namespace std;
int count1=0;

void chk(int arr[], int s)
{
    for(int i=0;i<s;i++)
    {
         if(arr[i]==(arr[i+1])-1 || arr[i]==i || arr[i]==arr[i-1] ||arr[i]==arr[i+1]||arr[i]==(arr[i-1])+1)
           {

           }
           else
           {
               count1++;
           }
    }
}
int main()
{

       int s;
   cin>>s;
   int arr[s];
   for(int i=0;i<s;i++)
   {
       cin>>arr[i];
   }
   if(arr[0]==0)
   {
       for(int i=0;i<s;i++)
       {
           if(arr[i]==0)
           {
               chk(arr,s);

           }
       }

   }

   if(count1>0)
   {
       cout<<"NO"<<endl;

   }
   else
   {
       cout<<"YES"<<endl;

   }




count1=0;







}
