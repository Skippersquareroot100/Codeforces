#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector <int> arr;
    vector <int> arr4;
    vector <int> arr3;
    vector <int> arr2;
    vector <int> arr1;
    int count=0,count1=0,count2=0;

    for(int i=0; i<a; i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==4)
        {
            count++;
        }
        else if(arr[i]==3)
        {
            int k=arr[i];
            arr3.push_back(k);
        }
        else if(arr[i]==2)
        {
            int k=arr[i];
            arr2.push_back(k);
        }
        else if(arr[i]==1)
        {
            int k=arr[i];
            arr1.push_back(k);
        }
    }




    if(arr2.size()%2==0)
    {
        count=count+(arr2.size()/2);
    }
    else
    {

        if(arr3.size()>=arr1.size())
        {
            count=count+((arr2.size()/2)+1);
        }
        else
        {
            count=count+((arr2.size()/2)+1);

            if(arr1.size()-arr3.size()==1)
            {
                count1=1;
            }
            else if(arr1.size()-arr3.size()==2)
            {
                count2=2;
            }
            else
            {
                count2=2;
            }
        }


    }


    if(arr3.size()>=arr1.size())
    {
        count=count+arr3.size();
    }
    else
    {
        if(arr3.size()<arr1.size())
        {
           if(arr1.size()>1 && arr3.size()>=1)
            {
                count=count+arr3.size();
                int l=arr1.size()-arr3.size();
                 l=l-count1-count2;

            if(l%4==0)
            {
                count =count+(l/4);
            }
            else
            {
                count =count+((l/4)+1);
            }
            }
            else
            {
                int j=arr1.size()-count1-count2;
            if(j%4==0)
            {
                count =count+(j/4);
            }
            else
            {
                count =count+((j/4)+1);
            }
            }

        }

        else    if(arr1.size()-arr3.size()>=3)
        {
            int j=arr1.size()-count1-count2;
            if(j%4==0)
            {
                count =count+(j/4);
            }
            else
            {
                count =count+((j/4)+1);
            }
        }
    }

    cout<<count;
}
