#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<2;
            cout<<endl;
            cout<<1<<" "<<(a-1);
        }
        else
        {
            cout<<1;
            cout<<endl;
            cout<<a;
        }
         cout<<endl;
    }

}
