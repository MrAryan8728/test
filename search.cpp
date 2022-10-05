#include<bits/stdc++.h>
using namespace std;
void print(int arr[][100],int m,int n,int x)
{
     int i = 0,j = n - 1;
     while(i < m && j >= 0)
     {
        if(arr[i][j] == x)
        {
            cout<<i<<" "<<j<<endl;
            return;
        }
        else if(arr[i][j] > x)
        {
            j--;
        }
        else 
        i++; 
     }
    cout<<"-1"<<endl;
}
int main()
{
    int arr[100][100];
    int m,n;
    cin>>m>>n;
    arr[m][n];
    for(int i = 0;i < m;i++)
    {
        for(int j = 0;j < n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;
    print (arr,m,n,x);
}