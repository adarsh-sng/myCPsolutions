#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,k,x;cin>>n>>k>>x;
 vector<int>v(n);
 int a =0;
 int s=0;
for (int i = 0; i <n ; i++){
   cin>>v[i];
   s+=v[i];
   if(v[i]>=x){
    a=i+1;
   }
}
if(s*n<x){
    cout<<0<<endl;return;
}
if(s*n==x){
    cout<<1<<endl;return;
}
int di = x/s;
int ans = n*(n-di);
int s2 =s*(di-1);
int b =0;
for (int i = n-1; i>0 ; i--)
{
    s2+=v[i];
    if(s2>=x){
        b=i+1;
        break;
    }
}
ans+=b;
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