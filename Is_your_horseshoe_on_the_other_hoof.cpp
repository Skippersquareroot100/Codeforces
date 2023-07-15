#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int arr[4];
      int arr2[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<4;i++)
    {
        arr2[i]=0;
        if(arr[i]!=arr[i-1])
        {
            arr2[i]=arr[i];
        }
    }

    for(int i=0;i<4;i++)
    {


        if(arr2[i]==0)
        {
            count++;
        }
    }

       cout<<count;
}
