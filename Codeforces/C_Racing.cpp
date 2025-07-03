// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  16.06.2025

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
    int n;
    cin >> n;
    vector<int> d(n);
    for (auto &it : d)
        cin >> it;
    vector<pair<int, int>> vp(n);
    for (auto &it : vp)
        cin >> it.fi >> it.sc;

    int mn = vp.back().sc;
    vector<int> next(n);
    next[n - 1] = mn;
    for (int i = n - 2; i >= 0; i--)
    {
        if (mn < vp[i].fi)
        {
            cout << -1 << '\n';
            return;
        }
        mn = min(mn, vp[i].sc);
        next[i] = mn;
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == -1)
        {
            if (curr + 1 <= next[i])
            {
                d[i] = 1;
                curr++;
            }
            else
                d[i] = 0;
            if (vp[i].fi > curr || vp[i].sc < curr)
            {
                cout << -1 << '\n';
                return;
            }
        }
        else if (d[i] == 1)
        {
            curr++;
            if (vp[i].fi > curr || vp[i].sc < curr)
            {
                cout << -1 << '\n';
                return;
            }
        }
        else if (d[i] == 0)
        {
            if (vp[i].fi > curr)
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    for (auto it : d)
        cout << it << ' ';
    cout << '\n';
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