// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  16.06.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define fi first
#define sc second
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

    vector<int> next(n), pore_barbe(n, 0);
    int mn = vp.back().sc;
    for (int i = n - 1; i >= 0; i--)
    {
        if (i)
            next[i - 1] = mn = min(mn, vp[i].sc);
        if (i + 1 < n)
            pore_barbe[i] = pore_barbe[i + 1];
        pore_barbe[i] += (d[i] == 1);
    }

    int curr = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if (d[i] == -1)
            d[i] = (curr + 1 + pore_barbe[i] <= next[i] && curr + 1 <= vp[i].sc);
        if (d[i] == 1)
            curr++;
        if (!(vp[i].fi <= curr && curr <= vp[i].sc))
        {
            cout << -1 << '\n';
            return;
        }
    }
    if (d[n - 1] == -1)
    {
        if (curr < vp[n - 1].sc)
            d[n - 1] = 1, curr++;
        else
            d[n - 1] = 0;
    }
    else if (d[n - 1] == 1)
        curr++;
    if (!(vp[n - 1].fi <= curr && curr <= vp[n - 1].sc))
    {
        cout << -1 << '\n';
        return;
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