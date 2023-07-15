#include <bits/stdc++.h>
using namespace std;
int main()
{   int k,l,m,n,d;
    int count=0;
    cin >>k>>l>>m>>n>>d;
    bool arr[d+1];
    for(int i=1;i<=d;i++)
    {
        arr[i]=0;
    }
    for(int i=l;i<=d;i=i+l)
    {
        arr[i]=1;
    }
    for(int i=m;i<=d;i=i+m)
    {
        arr[i]=1;
    }
    for(int i=n;i<=d;i=i+n)
    {
        arr[i]=1;
    }
    for(int i=k;i<=d;i=i+k)
    {
        arr[i]=1;
    }
    for(int i=1;i<=d;i++)
    {

       if(arr[i]==1)
       {
          count++;
       }
    }
     cout<<count;
}
