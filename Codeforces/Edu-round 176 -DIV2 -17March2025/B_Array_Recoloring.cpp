#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,k;cin>>n>>k;
 vector<int>v(n);
 for (int i = 0; i < n; i++) {
    cin>>v[i];
 }
 int ans=0;
  if(k==1){
   int ans=v[0]+v[n-1];
   for(int i=1;i<n-1;i++){
      ans=max(ans,v[i]+v[n-1]);
      ans=max(ans,v[0]+v[i]);
   }
    cout<<ans<<endl;
    return;
 }
 sort(v.begin(),v.end());
 for (int i = n-(k+1); i < n; i++){
    ans+=v[i];
 }
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