#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int n;cin>>n;
 vector<int>v(n);
 for (int i = 0; i <n ; i++){
    cin>>v[i];
 }
 int z=0,o=0,t=0,th=0,f=0;
 for (int i = 0; i < n; i++)
 {
    if(v[i]==0)z++;
    if(v[i]==1)o++;
    if(v[i]==2)t++;
    if(v[i]==3)th++;
    if(v[i]==5)f++;
    if(z>=3&&o>=1&&t>=2&&th>=1&&f>=1){
        cout<<i+1<<endl;
        return;
    }
 }
 cout<<0<<endl;
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