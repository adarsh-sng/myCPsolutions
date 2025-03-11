#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n;cin>>n;
 vector<int>v(n);
 int s=0;
 for (int i = 0; i < n; i++)
 {
    cin>>v[i];
    s+=v[i];
 }
 int ans=s-n+1;
 cout<<ans<<endl;
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