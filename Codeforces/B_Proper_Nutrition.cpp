// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  06.03.2025

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
const int N = 1e7 + 10;
//-----------------------------------------------------------------------------------------
int a, b, l, r;
vector<int> dp(N, -1);
void ok(int n, int t1, int t2)
{
    if (n == 0)
    {
        l = t1;
        r = t2;
        return;
    }
    if (n < 0)
        return;
    if (dp[n] != -1)
        return;
    ok(n - a, t1 + 1, t2);
    ok(n - b, t1, t2 + 1);
    dp[n] = 1;
}
void solve(void)
{
    int n;
    cin >> n >> a >> b;
    l = r = -1;
    ok(n, 0, 0);
    if (l != -1)
    {
        cout << "YES\n";
        cout << l << ' ' << r << '\n';
    }
    else
        cout << "NO\n";
}
//-----------------------------------------------------------------------------------------
signed main()
{
    // cout << fixed << showpoint << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 1, T;
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}