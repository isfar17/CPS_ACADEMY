#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

const int mx=2e5+10;
int arr[mx];
int presum[mx];

int main() {

    optimize()
    file()
    int n,t;
    cin>>n>>t;
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <=n; i++)
    {
        presum[i]=presum[i-1]+arr[i]; //pre[1]=pre[0]+a[1]
                                    //         =0+input by user;
    }
    

    while (t--)
    
    {
        int l,r;
        cin>>l>>r;
        cout<<presum[r]-presum[l-1]<<endl;
    }

}