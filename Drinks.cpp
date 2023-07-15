#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s;
    cin>>s;
    float sm=0;
   float  arr[s];

    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<s;i++)
    {
        sm=arr[i]+sm;
    }


    float k=100*s;
    cout<<setprecision(12)<<(sm/k)*100;
}
