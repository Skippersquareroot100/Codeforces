#include <bits/stdc++.h>
using namespace std;
long long const n=1e10;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long s;
        cin>>s;
        long long arr[s];
        long long odd=0,even=0,zero=0;
        for(int i=0; i<s; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                even++;

            }
            else if(arr[i]==0)
            {
                zero++;
            }
            else
            {
                odd++;
            }

        }

        if(even==s || odd==s)
        {
            cout<<"YES"<<endl;
        }
        else if(zero>0)
        {
            cout<<"NO"<<endl;
        }
        else if (even>0 && odd>0)
        {
            long long arr2[s];
            for(int i=0; i<s; i++)
            {
                arr2[i]=n;
                if(arr[i]%2==0)
                {

                }
                else
                {
                    arr2[i]=arr[i];
                }

            }
            sort(arr2,arr2+s);
            int key=arr2[0];
            int ded=0;
            for(int i=0; i<s; i++)
            {
                long long lo=(arr[i]-key);
                if(lo<0)
                {
                    ded++;
                }
            }
            if(ded>0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}

