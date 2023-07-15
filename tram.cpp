#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >>s;
    int arr1[s],arr2[s];
    for(int i=0;i<s;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }


    int lim=0;
    int cap=0;
     for(int i=0;i<s;i++)
    {
        cap=(cap-arr1[i])+arr2[i];
        if(cap>lim)
        {
            lim=cap;
        }
    }

    cout<<lim;

}
