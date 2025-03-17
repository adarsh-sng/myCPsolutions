#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,k;cin>>n>>k;
 int cnt=0;
 if(n%2!=0){
    n=n-k;
    cnt++;
 }
 int ans = n/(k-1)+(n%(k-1)!=0);
cnt+=ans;
cout<<cnt<<endl;
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