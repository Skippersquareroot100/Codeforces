#include<bits/stdc++.h>
using namespace std;
int count1=0;
void mac(int arr[],int s)
{
    int su=0;
    for(int i=0; i<s; i++)
    {
        if(arr[i]==-1)
        {
            arr[i]=-(arr[i]);
            count1++;
            break;
        }
    }
    for(int i=0; i<s; i++)
    {
        su=su+arr[i];
    }
    if(su<0)
    {
        mac(arr,s);
    }

}


int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int s;
        cin>>s;
        int arr1[s],sum=0,pro=1;
        for(int i=0; i<s; i++)
        {
            cin>>arr1[i];
            sum=sum+arr1[i];

        }

        if(sum<0)
        {
            mac(arr1,s);
        }
        for(int i=0; i<s; i++)
        {
            pro=pro*arr1[i];
        }

        if(pro!=1)
        {
            count1++;
        }
        cout<<count1<<endl;
        count1=0;
    }

}
