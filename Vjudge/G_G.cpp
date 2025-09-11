// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.08.2025

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
const int N = 1e5 + 10;
//------------------------------(solve)----------------------------------------------------
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.fi == b.fi)
        return a.sc > b.sc;
    return a.fi < b.fi;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vector<int> temp(x);
        for (auto &it : temp)
            cin >> it;
        int l = 0, r = inf, need = inf;
        while (l <= r)
        {
            int m = (l + r) / 2;
            int tt = m, fl = 1;
            for (auto it : temp)
            {
                if (tt <= it)
                {
                    fl = 0;
                    break;
                }
                tt++;
            }
            if (fl)
                need = min(need, m), r = m - 1;
            else
                l = m + 1;
        }
        v.push_back({need, x});
    }
    sort(all(v), cmp);
    int l = 0, r = inf, ans = inf;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int tt = m, fl = 1;
        for (auto it : v)
        {
            if (tt < it.fi)
            {
                fl = 0;
                break;
            }
            tt += it.sc;
        }
        if (fl)
            ans = min(ans, m), r = m - 1;
        else
            l = m + 1;
    }
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