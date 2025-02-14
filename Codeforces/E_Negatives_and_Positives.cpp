// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  14.02.2025

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
const int N = 2e5 + 10;
//-----------------------------------------------------------------------------------------
vector<int> v(N), dp(N);
int n;
int ok(int i)
{
    if (i > n)
        return 0;
    if (dp[i] != -inf)
        return dp[i];
    int ans = -inf;
    if (i + 1 <= n)
    {
        ans = max(ans, ok(i + 2) + (v[i] + v[i + 1]));
        ans = max(ans, ok(i + 2) - (v[i] + v[i + 1]));
    }
    ans = max(ans, ok(i + 1) + (v[i]));
    return dp[i] = ans;
}
void solve(void)
{
    for (int i = 0; i < N; i++)
        dp[i] = -inf;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    cout << ok(1) << '\n';
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