#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
void solve()
{
    int n;
    cin >> n;
    int c = 0;
    int ans = n / 15;
    c += (ans) * 3;
    c++;
    if (n % 15 >= 1)
        c++;
    if (n % 15 >= 2)
        c++;
    cout << c << endl;
}
signed main()
{
    fast int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}