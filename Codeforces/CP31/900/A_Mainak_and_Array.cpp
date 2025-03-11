#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n;cin>>n;
 vector<int>v(n);
 for (int i = 0; i <n; i++){
    cin>>v[i];
 }
 if(n==1){cout<<0<<endl;return;}
 int ans  =v[n-1]-v[0]; 
 int min =*min_element(v.begin(),v.end()-1);
 int maxi =*max_element(v.begin()+1,v.end());
 ans =max(v[n-1]-min,ans);
 ans =max(maxi-v[0],ans);
 for (int i = 0; i < n-1; i++){
   ans= max(v[i]-v[i+1],ans);
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