// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  27.10.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n';
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 8e3 + 10;
//------------------------------(solve)----------------------------------------------------
int dp[N][N];
int ok(int n, int pre, vector<int> &v, vector<int> &c)
{
    if (n == v.size())
        return (v[n - 1] >= v[pre]) ? 0 : inf;
    if (dp[n][pre] > -1)
        return dp[n][pre];
    int ans = inf;
    if (v[pre] > v[n])
    {
        ans = min(ans, ok(n + 1, n, v, c) + inf);
        ans = min(ans, ok(n + 1, pre, v, c) + c[n]);
    }
    else
        ans = min(ans, ok(n + 1, n, v, c));
    return dp[n][pre] = ans;
}
void solve(void)
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<int> v(n), c(n), b(n);
    for (auto &it : v)
        cin >> it;
    for (auto &it : c)
        cin >> it;
    int an = ok(1, 0, v, c);
    memset(dp, -1, sizeof(dp));
    int ans = 0;
    if (v[0] > 1)
        ans += c[0];
    v[0] = 1;
    ans = ok(1, 0, v, c);
    cout << min(an, ans) << '\n';
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