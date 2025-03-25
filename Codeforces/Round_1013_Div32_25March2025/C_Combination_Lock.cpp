#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n;cin>>n;
 if(n%2==0){
    cout<<-1<<endl;
 }else{
    for (int i = 1; i <=n; i+=2)
    {
        cout<<i<<" ";
    }
    for (int i = 2; i <= n-1; i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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