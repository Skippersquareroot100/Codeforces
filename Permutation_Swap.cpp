#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         int s;
    cin>>s;
   int  arr[s];
    for(int i=1;i<=s;i++)
    {
        cin>>arr[i];
    }
    int a=0;
    for(int i=1;i<=s;i++)
    {
        a=__gcd(a,abs(i-arr[i]));
    }
      cout<<a;
      cout<<endl;
    }

}
