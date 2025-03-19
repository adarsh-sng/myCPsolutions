#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int x,y;
    cin>>x>>y;
    if (x==y) {
        cout <<x+y<< endl;
    } else {
        cout <<2*max(x,y)-1<< endl;
    }
}
signed main() {
    fast
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
