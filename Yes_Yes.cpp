#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
            int count=0;
            int count2=0;
        vector <char> a;
        cin>>s;

        for(int i=0;i<s.size();i++)
        {
            if(int(s[i])==121 || int(s[i])==101 ||  int(s[i])==115 ||  int(s[i])==69 ||  int(s[i])==89 ||  int(s[i])==83)
            {
                s[i]=s[i];
            }
            else
            {
                s[i]='|';
            }
        }

       sort(s.begin(),s.end());



         for(int i=0;i<s.size();i++)
        {
          if(s[i]!='|')
          {
              count++;
          }
        }

        s.erase(count);

         for(int i=0;i<s.size();i++)
     {
         if(s[i]==s[i+1])
            {
                s[i]='|';
            }
                else
                {
                    s[i]=s[i];
                }
     }

     for(int i=0;i<s.size();i++)
        {
          if(s[i]!='|')
          {
              count2++;
          }
        }
        sort(s.begin(),s.end());
          s.erase(count2);

     if(s=="esY" || s=="sY" || s=="es" || s=="Y" || s=="e" || s=="s" || s=="eY")
        {
            cout<<"YES"<<endl;
        }
        else
        {
              cout<<"NO"<<endl;
        }
    }

}

