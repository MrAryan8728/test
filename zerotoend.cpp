#include<iostream>
#include<vector>
using namespace std;
//1.Naive Approach O(n) , O(n):
// void helper(vector<int> v,int n)
// {
//     int zero = 0;
//     vector<int> ans;
//     int i = 0;
//     for( i = 0;i < n;i++)
//     {
//         if(v[i] != 0)
//         {
//             ans.push_back(v[i]);
//         }
//         zero++;
//     }
//     while(zero--)
//     {
//         ans.push_back(0);
//     }
//     for(int i = 0;i < n;i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }
//2.Pro Approach O(n) , O(1):
void helper(vector<int> &v,int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            swap(v[j], v[i]); // Partitioning the array
            j++;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    cin>>v[i];
    helper(v,n);
    for(int i = 0;i < n;i++)
    cout<<v[i]<<" ";
}