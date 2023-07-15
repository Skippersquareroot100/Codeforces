#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int count=0;
        int s;
        cin>>s;
        for(int i=0; i<s; i++)
        {
            //cin>>arr[i]>>brr[i];
            int x,y;
            cin>>x>>y;
            if(x>y)
            {
                count++;
            }
        }
        cout<<count<<endl;


        t--;
    }
}


