#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    bool flag=false;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='H' ||a[i]=='Q'|| a[i]=='9')
        {
            cout<<"YES";
            flag=true;
            break;

        }

    }

    if(flag==false)
    {
        cout<<"NO";
    }
}
