// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  11.07.2025

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
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0;
    for (auto &it : v)
        cin >> it;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
            mx = max(mx, (v[i - 1] + v[i] + 1) / 2);
    }
    for (int i = 0; i < n; i++)
        v[i] = max(v[i] - mx, mx - v[i]);
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            cout << -1 << '\n';
            return;
        }
    }
    cout << mx << '\n';
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