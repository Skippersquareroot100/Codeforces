#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long A,B,C,D,E,F,G,H;
    A=a+b+c;
    B=a*b+c;
    C=a+b*c;
    D=a*b*c;
    E=a*(b+c);
    G=(a*b)+c;
    F=(a+b)*c;
    H=a+(b*c);
    long arr[8]= {A,B,C,D,E,F,G,H};

    sort(arr,arr+8);
    cout<<arr[7];
}
