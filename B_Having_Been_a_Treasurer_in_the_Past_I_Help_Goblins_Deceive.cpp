#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n;
 cin>>n;
 string s;
 cin>>s;
 int d=0;
 int u=0;
 for (int i = 0; i < n; i++)
 {
   if (s[i]=='-')d++;
   else u++;
 }
//  cout<<d<<endl;
//  cout<<u<<endl;
 if(d<2||u==0){
    cout<<0<<endl;
    return;
 }
 int ans=0;int m=d/2;int r=d-m;
 ans =u*m*r;
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