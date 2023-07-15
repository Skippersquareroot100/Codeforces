#include <bits/stdc++.h>
using namespace std;
/*int lcm(int a,int b)
{
    if(b==0)
    {
            return a;
      }
        else
        {
            int k=__gcd(a,b);
            return a*b/k;
        }
    }*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b,a % b);
}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int a;
        cin>>a;
        long long sum=0;
        for(int j=1; j<=a; j++)
        {
            sum=sum+((a*i)/gcd(a,i));
        }
        cout<<sum<<endl;
    }
}
