#include<bits/stdc++.h>
using namespace std;
const long long N=1e5;
int main()
{
  long long s;
  cin >>s;
  int arr[N];
  for(int i=0;i<s;i++)
  {
      int num;
      cin>>num;
      arr[num]=i+1;

  }
  long long sum=0,sum2=0;
 long long  q;
  cin>>q;
    for(int i=0;i<q;i++)
  {
      int po;
      cin>>po;
      sum=sum+(arr[po]);
      sum2=sum2+((s-arr[po])+1);
  }

cout<<sum<<" "<<sum2;

}
