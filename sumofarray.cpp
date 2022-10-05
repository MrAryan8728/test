#include<iostream>
using namespace std;
// int addition(int ans[], int ind,int size)
// {
// if(ind == size)
// {
//     return;
// }
// int sum =0;
// sum += ans[i];
// addition(ans,ind + 1,n);
// return sum;
// }
// int sum(int n)
// {
//     if(n == 0)
//     return 0;
//     if(n == 1)
//     return 1;
//     int ans;
//     ans = sum(n - 1)+sum(n - 2);
// }
void test(int &arr[])
{
    cout<<"From the function : "<<sizeof(arr)<<endl;
}
int main()
{
int n = 5;
// cin>>n;
// cout<<sum(n-1);
int arr[n] ={0};
// for(int i = 0; i < n;i++) 
// {
//     cin>>arr[i];
// }
// cout<<addition( arr , 0 , arr.size() );
cout<<"Size of the Array from main : "<<sizeof(arr)<<endl;
test(arr);
}  