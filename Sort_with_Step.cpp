#include<bits/stdc++.h>
using namespace std;
int count1=0;
void swp(int arr[],int s,int k)
{
    for(int i=0;i<s;i++)
    {
        int p=i+k;
        if(p==s-1)
        {
            break;
        }
        swap(arr[i],arr[p]);

    }
    count1++;
}
int eq(int arr1[],int arr2[],int s)
{
    int flag=0;
      for(int i=0;i<s;i++)
   {
       if(arr1[i]!=arr2[i])
       {
           flag=1;
       }
   }

   return flag;
}
int main()
{
    int a,b;

    cin>>a>>b;
    int arr[a];
    int brr[a];
    int crr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(brr,brr+a);
    swp(arr,a,b);
    for(int i=0;i<a;i++)
    {
      cout<<arr[i]<<" ";
    }
  /* int o= eq(arr,brr,a);



   if(o==0)
    {
        cout<<0;
    }
    else if(o==1)
    {
        swp(arr,a,b);
        int j=eq(arr,crr,a);

        if(j==0)
        {
            cout<<1;
        }
        else if(j==1)
        {
            cout<<-1;
        }
    }*/




}
