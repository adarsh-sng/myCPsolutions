#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n,x;cin>>n>>x;
 vector<int>v;
 int ans =0;
 for (int i = 0; i < n; i++)
 {
    int e;cin>>e;
    if(e>=x){ans++;}
    else{v.push_back(e);}
 }
 n= n-ans;
 sort(v.rbegin(),v.rend());
 int m=2;
 for (int i = 1; i < n; i++)
 {
    if((v[i]*m)>=x){
        ans++;
        i++;
        m=2;
    }else{
        m++;
    }
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