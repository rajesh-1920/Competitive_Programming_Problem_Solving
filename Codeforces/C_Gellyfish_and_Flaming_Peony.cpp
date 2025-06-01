// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  01.06.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n, g, fl = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        if (fl)
            g = it, fl = 0;
        else
            g = __gcd(g, it);
    }
    int cnt = 0;
    for (auto it : v)
        if (it == g)
            cnt++;
    int ans = n - cnt;
    if (g > 1 && cnt == 0)
        ans++;
    cout << ans << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}