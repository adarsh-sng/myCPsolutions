#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,k;cin>>n>>k;
 if((n%k!=0 and n/k<2)||(n==k)){
    cout<<-1<<endl;
 }
 else{
    int r =n%k;
    for (int i = 1; i <= n-k; i++)
    {
        cout<<k+i<<" ";
    }
    for (int i = r+1; i <= k; i++)
    {
        cout<<i<<" ";
    }
    for (int i = 1; i <= r; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
 }
}
signed main() {
    fast
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}