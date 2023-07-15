#include<bits/stdc++.h>
using namespace std;
long long count1=0;
void one(long long a)
{
    if(a>=1)
    {
        a=a-1;
        count1++;
        one(a);
    }
}

void fiv(long long a)
{
    if(a>=5)
    {
        a=a-5;
        count1++;
        fiv(a);
    }
    else
    {
        one(a);
    }
}
void ten(long long a)
{
    if(a>=10)
    {
        a=a-10;
        count1++;
        ten(a);
    }
    else
    {
        fiv(a);
    }
}
void twe(long long a)
{
    if(a>=20)
    {
        a=a-20;
        count1++;
        twe(a);
    }
    else
    {
        ten(a);
    }
}

void hun(long long a)
{
    if(a>=100)
    {
        a=a-100;
        count1++;
        hun(a);
    }
    else
    {
        twe(a);
    }
}
int main()
{
    long long aa;
    cin>>aa;
    hun(aa);
    cout<<count1;

}
