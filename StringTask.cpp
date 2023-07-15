#include <iostream>
using namespace std;
int Atoa( int j)
{
    return j+32;
}
int main()
{
    string a;
    string b;
    int k;
    cin>>a;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]<97)
        {
            k=int(a[i]);

          a[i]=char(Atoa(k));
        }

    }
       for(int i=0;i<a.size();i++)
    {
        if(int(a[i])==97 || int(a[i])==101 ||int(a[i])==105 ||int(a[i])==111 ||int(a[i])==117|| int(a[i])==121)
        {
         continue;
        }
        else
        {
            cout<<"."<<a[i];
        }
    }



    }

