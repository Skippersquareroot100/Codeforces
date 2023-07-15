#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        char arr[3][3];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>arr[i][j];
            }
        }



        if(     int(arr[0][0])==79 && int(arr[0][1])==79 && int(arr[0][2])==79 ||
                int(arr[0][0])==79 && int(arr[1][0])==79 && int(arr[2][0])==79 ||
                int(arr[0][1])==79 && int(arr[1][1])==79 && int(arr[2][1])==79 ||
                int(arr[0][2])==79 && int(arr[1][2])==79 && int(arr[2][2])==79 ||
                int(arr[1][0])==79 && int(arr[1][1])==79 && int(arr[1][2])==79 ||
                int(arr[2][0])==79 && int(arr[2][1])==79 && int(arr[2][2])==79 ||
                int(arr[2][0])==79 && int(arr[1][1])==79 && int(arr[0][2])==79 ||
                int(arr[0][0])==79 && int(arr[1][1])==79 && int(arr[2][2])==79 )
        {
            cout<<"O"<<endl;
        }

        else if( int(arr[0][0])==88 && int(arr[0][1])==88 && int(arr[0][2])==88 ||
                 int(arr[0][0])==88 && int(arr[1][0])==88 && int(arr[2][0])==88||
                 int(arr[0][1])==88 && int(arr[1][1])==88 && int(arr[2][1])==88||
                 int(arr[0][2])==88 && int(arr[1][2])==88 && int(arr[2][2])==88||
                 int(arr[1][0])==88 && int(arr[1][1])==88 && int(arr[1][2])==88 ||
                 int(arr[2][0])==88 && int(arr[2][1])==88 && int(arr[2][2])==88 ||
                 int(arr[2][0])==88 && int(arr[1][1])==88 && int(arr[0][2])==88 ||
                 int(arr[0][0])==88 && int(arr[1][1])==88 && int(arr[2][2])==88 )
        {
            cout<<"X"<<endl;
        }

        else if( int(arr[0][0])==43 && int(arr[0][1])==43 && int(arr[0][2])==43 ||
                 int(arr[0][0])==43 && int(arr[1][0])==43 && int(arr[2][0])==43||
                 int(arr[0][1])==43 && int(arr[1][1])==43 && int(arr[2][1])==43||
                 int(arr[0][2])==43 && int(arr[1][2])==43 && int(arr[2][2])==43||
                 int(arr[1][0])==43&& int(arr[1][1])==43 && int(arr[1][2])==43||
                 int(arr[2][0])==43 && int(arr[2][1])==43 && int(arr[2][2])==43 ||
                 int(arr[2][0])==43 && int(arr[1][1])==43 && int(arr[0][2])==43 ||
                 int(arr[0][0])==43 && int(arr[1][1])==43 && int(arr[2][2])==43 )
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }



        t--;
    }
}
