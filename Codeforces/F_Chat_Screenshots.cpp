// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  19.10.2025

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
const int N = 2e5 + 10;
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v(k, vector<int>(n));
    for (auto &it : v)
        for (auto &ii : it)
            cin >> ii;
    vector<int> pr(n + 5, -1);
    for (int i = 1; i < n; i++)
        pr[v[0][i]] = v[0][i - 1];
    for (int i = 1; i < k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (pr[v[i][j]] == v[i][j - 1])
                continue;
        }
    }
    cout << "YES\n";
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