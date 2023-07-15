#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    bool flag=0;
    if(a.size()<7)
    {
        cout<<"NO";
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            if(int(a[i])==48 && int(a[i+1])==48 && int(a[i+2])==48 && int(a[i+3])==48 && int(a[i+4])==48 && int(a[i+5])==48 && int(a[i+6])==48)
            {
                flag=1;
            }
            else if(int(a[i])==49 && int(a[i+1])==49 && int(a[i+2])==49 && int(a[i+3])==49 && int(a[i+4])==49 && int(a[i+5])==49 && int(a[i+6])==49)
            {
                 flag=1;
            }
        }
        if(flag ==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    }




}
