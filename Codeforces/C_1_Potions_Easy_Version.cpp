// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  31.07.2025

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
const int N = 2e3 + 10;
//------------------------------(solve)----------------------------------------------------
int dp[N][N];
int ok(int i, int cnt, vector<int> &v)
{
    if (i == v.size())
        return cnt;
    if (dp[i][cnt] != -1)
        return dp[i][cnt];
    swap(v[i], v[i - 1]);
    int ans = ok(i + 1, cnt, v);
    swap(v[i], v[i - 1]);
    if (v[i - 1] + v[i] >= 0)
    {
        v[i] = v[i] + v[i - 1];
        ans = max(ans, ok(i + 1, cnt + 1, v));
        v[i] = v[i] - v[i - 1];
    }
    return dp[i][cnt] = ans;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    memset(dp, -1, sizeof(dp));
    cout << ok(1, 0, v) << '\n';
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