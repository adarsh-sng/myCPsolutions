#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,k,p;
 cin>>n>>k>>p;
if(k<0)k=(-1*k);
int ans =k/p;
if(k%p>0)ans++;
if (ans>n) cout<<-1<<endl;
else cout<<ans<<endl;
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