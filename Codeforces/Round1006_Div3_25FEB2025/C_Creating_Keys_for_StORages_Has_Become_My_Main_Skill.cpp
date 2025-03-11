#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
    int n, x;
    cin >>n>>x;
    int pos = 0;
    while ((x >> pos) & 1) pos++;
    int limit = (1LL<<pos);
    vector<int> v(n);
    for (int i = 0; i < min(n, limit); i++){
        v[i]=i;
    }
    int bor = 0;
    for (int num : v) {
       bor |= num;
    }
    if (bor != x) {
        v.back() = x;
    }
    for (int num : v) cout << num << " ";
    cout << endl;
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