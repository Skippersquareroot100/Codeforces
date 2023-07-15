#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
    {
        sum=sum+(a*i);
    }
    if(sum>b)
    {
        cout<<sum-b;
    }
    else
    {
        cout<<0;
    }
}
