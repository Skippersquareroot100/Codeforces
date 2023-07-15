
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int x=k*l;
   int y=x/nl;
   int s=c*d;
   int j=p/np;
   int arr[3];
    arr[0]=s;
    arr[1]=j;
    arr[2]=y;
    sort(arr,arr+3);
    int zz=arr[0]/n;
    cout<<zz;

}
