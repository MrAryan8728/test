#include<bits/stdc++.h>
using namespace std;
void helper(int arr[],int n)
{
    int i = 0,j = 0,k = n-1;
    while(i < n)
    {
        if(arr[i] == 1)
        {i++;}
        else if(arr[i] == 0)
        {swap(arr[i],arr[j]); i++;j++;}
        else
        {swap(arr[i],arr[k]); i++;k--;}
    }
}
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i = 0;i < n;i++)
    cin>>arr[i];
    helper(arr,n);
    for(int i = 0;i < n;i++)
    cout<<arr[i]<<" ";
}