#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int l,r,d,u;
 cin>>l>>r>>d>>u;
if(l==r&&d==u&&r==d){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
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