#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,q;
 cin>>n>>q;
 int sum=0;
 vector<int>v(n),p(n);
 for (int i = 0; i < n; i++){
    cin>>v[i];
    sum+=v[i];
    p[i]=sum;
 }
 while(q--){
    int l,r,k;
    cin>>l>>r>>k;
    int pre =0,suf=0;
    (l==1?pre=0:pre=p[l-2]);
    suf=sum-p[r-1];
    int ans= pre+suf+(k*(r-l+1));
    cout<<((ans%2)?"YES":"NO")<<endl;
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