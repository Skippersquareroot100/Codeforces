#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int time=0;
    int arr1[a],arr2[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }


    int cr1=0,cr0=0,cl0=0,cl1=0;

    for(int i=0;i<a;i++)
    {
       if(arr1[i]==0)
       {
           cr0++;
       }
       else  if(arr1[i]==1)
       {
           cr1++;
       }


    }
    for(int i=0;i<a;i++)
    {
        if(arr2[i]==0)
       {
           cl0++;
       }
       else  if(arr2[i]==1)
       {
           cl1++;
       }
    }

   if(cr1>cr0)
   {
       for(int i=0;i<a;i++)
       {
           if(arr1[i]==0)
           {
               time++;
           }

       }
   }
  else if(cr1<cr0)
    {
        for(int i=0;i<a;i++)
       {
           if(arr1[i]==1)
           {
               time++;
           }

       }
    }
      else if(cr1==cr0)
    {
        for(int i=0;i<a;i++)
       {
           if(arr1[i]==1)
           {
               time++;
           }

       }
    }


    if(cl1>cl0)
   {
       for(int i=0;i<a;i++)
       {
           if(arr2[i]==0)
           {
               time++;
           }

       }
   }
  else if(cl1<cl0)
    {
        for(int i=0;i<a;i++)
       {
           if(arr2[i]==1)
           {
               time++;
           }

       }
    }
    else if(cl1==cl0)
    {
        for(int i=0;i<a;i++)
       {
           if(arr2[i]==1)
           {
               time++;
           }

       }
    }

    cout<<time;

}

