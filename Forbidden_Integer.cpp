#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;cin>>p;
    while(p!=0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector <int> k;
        if(b==1 && c==1)
        {
             cout<<"NO"<<endl;
             break;
        }
        for(int i=1;i<=b;i++)
        {
            if(i!=c)
            {
               k.push_back(i);
               break;
            }
        }

        if(a%k[0]==0)
        {
            cout<<"YES"<<endl;
            int y=a/k[0];
            cout<<y<<endl;
            for(int i=1;i<=a;i++)
            {
                cout<<k[0]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        p--;
    }
}
