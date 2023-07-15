#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long aa,ba,ca;
     cin>>aa>>ba;
   if(aa%2==0)
   {
       ca=aa/2;
   }
   else
   {
       ca=(aa/2)+1;
   }
   if(ba<=ca)
   {
       cout<<(ba*2)-1;
   }
   else
   {
       cout<<(ba-ca)*2;
   }

}
