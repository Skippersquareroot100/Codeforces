#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cin>>a;
   double sum=0,k=0;
   double arr[a];
   for(int i=0;i<a;i++)
   {
    cin>>arr[i];
    sum=sum+arr[i];
   }
    k=sum/a;
    cout<<setprecision(2);
    cout<<k;
}
