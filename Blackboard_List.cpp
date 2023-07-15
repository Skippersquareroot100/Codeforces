#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int s;
        cin>>s;
        int arr[s];
        for(int i=0; i<s; i++)
        {
            cin>>arr[i];
        }
        int mx=arr[0],mn=arr[0];
        for(int i=0; i<s; i++)
        {
            if(arr[i]>mx)
            {
                mx=arr[i];
            }
            if(arr[i]<mn)
            {
                mn=arr[i];
            }
        }
        if(mn<0)
        {
            cout<<mn;
        }
        else
        {
            cout<<mx;
        }
        cout<<endl;
    }

}
