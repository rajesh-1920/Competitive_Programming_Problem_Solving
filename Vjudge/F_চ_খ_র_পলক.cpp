// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  11.09.2025

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
bool cmp(pair<pair<int, long double>, int> a, pair<pair<int, long double>, int> b)
{
    if (a.fi.fi == b.fi.fi)
    {
        if (a.fi.sc == b.fi.sc)
            return a.sc < b.sc;
        return a.fi.sc > b.fi.sc;
    }
    return a.fi.fi > b.fi.fi;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<pair<pair<int, long double>, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        y = x + y;
        int t = x / y;
        long double xx = x % y;
        long double yy = y;
        long double tt = (xx / yy);
        v.push_back({{t, tt}, i});
    }
    sort(all(v), cmp);
    for (auto it : v)
        cout << it.sc << ' ';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    cout << fixed << showpoint << setprecision(10);
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