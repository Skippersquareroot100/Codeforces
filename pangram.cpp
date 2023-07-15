#include <bits/stdc++.h>
using namespace std;
int Atoa(int a)
{
return a+32;
}

int main()
{
int a,count=0;
string b,e;
vector <char> c;
vector <char> f;
cin>>a>>b;
for(int i=0;i<a;i++)
{
if(int(b[i])<97)
{
b[i]=char(Atoa(int(b[i])));
}
else
{
b[i]=b[i];
}

}

sort(b.begin(),b.end());

for(int i=0;i<a;i++)
{
if(b[i]==b[i+1])
{
}
else
{
int k=b[i];
c.push_back(k);
}
}



if(c.size()!=26)
{
    cout<<"NO";
}
else
{
    cout<<"YES";
}

}
