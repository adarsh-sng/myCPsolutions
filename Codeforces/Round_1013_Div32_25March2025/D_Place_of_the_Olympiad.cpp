#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,m,k;cin>>n>>m>>k;
 int r=k/n+(k%n!=0);
 if(r==1||2*r<=m){
    cout<<1<<endl;
    return;
 }
 if(n*m==k){
    cout<<m<<endl;
    return;
 }
 if(r==m){
    cout<<m<<endl;
    return;
 }
 int ans = r/(m-r+1)+((r%(m-r+1))!=0);
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