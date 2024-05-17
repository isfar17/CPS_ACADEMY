/*
Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.

A subarray is a contiguous subsequence of the array.

Example 1:

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
*/
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

const int mx=10;
int main() {

    int arr[mx]={0};
    int presum[mx]={0};
    optimize()
    file()
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <=n; i++)
    {
       presum[i]=presum[i-1]+arr[i];
    }

    int ans=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <=n; j++)
        {
            int len=j-i+1;
            if(len%2)
                ans+=presum[j]-presum[i-1];
        }
        
    }
    /*the code run as follows:
    ans= (sum[1]-sum[0])=>[1]=          1
    ans+= (sum[3]-sum[0])=>[1,4,2]=     7
    ans+= (sum[5]-sum[0])=>[1,4,2,5,3]=15
    ans+= (sum[2]-sum[1])=>[4]=         4
    ans+= (sum[4]-sum[1])=>[4,2,5]=    11
    ans+= (sum[3]-sum[2])=>[2]=         2
    ans+= (sum[5]-sum[2])=>[2,5,3]=    10
    ans+= (sum[4]-sum[3])=>[5]=         5
    ans+= (sum[5]-sum[4])=>[3]=         3
                                 total=58
    */
    cout<<ans<<endl;


}