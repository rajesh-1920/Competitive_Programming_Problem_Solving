// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  10.03.2025

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
int dp[35][2500][2500];
int ok(int n, int s1, int s2, int &sz, vector<pair<int, int>> &a, vector<pair<int, int>> &b)
{
    if (n > sz)
        return s1 + s2;
    if (dp[n][s1][s2] != -1)
        return dp[n][s1][s2];
    int in = 0;
    if (a[n].fi == 1)
        in += a[n].sc;
    else
        in += s1 * a[n].sc;

    if (b[n].fi == 1)
        in += b[n].sc;
    else
        in += s2 * b[n].sc;
    int ans = 0;
    for (int i = 0; i <= in; i++)
        ans = max(ans, ok(n + 1, s1 + i, s2 + in - i, sz, a, b));
    return dp[n][s1][s2] = ans;
}
void solve(void)
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    vector<pair<int, int>> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        char ch;
        cin >> ch >> x;
        if (ch == '+')
            a[i].fi = 1, a[i].sc = x;
        else
            a[i].fi = 2, a[i].sc = x - 1;
        cin >> ch >> x;
        if (ch == '+')
            b[i].fi = 1, b[i].sc = x;
        else
            b[i].fi = 2, b[i].sc = x - 1;
    }
    cout << ok(1, 1, 1, n, a, b) << '\n';
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