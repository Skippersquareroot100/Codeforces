#include <bits/stdc++.h>
using namespace std;
int main()
{
int a;
cin>>a;
int arr[a];
int count=0;
for(int i=0;i<a;i++)
{
    cin>>arr[i];
}
int k=arr[0];
for(int i=1;i<a;i++)
{
    if(arr[i]>k)
    {
        k=arr[i];
        count++;


    }
}

int l=arr[0];
for(int i=1;i<a;i++)
{
    if(arr[i]<l)
    {
        l=arr[i];
        count++;

    }
}

cout<<count;

}

