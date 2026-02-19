// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  18.02.2026

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define fi first
#define sc second
#define int long long int

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int MOD = 1e9 + 7;
const int N = 1e7 + 1;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int l, r, m;
    cin >> l >> r >> m;
    if (m < l)
        for (int i = l; i <= r; i++)
        {
            int md = m - (m / i) * i;
            int mn = min(md, i - md);
            if (mn <= r - l)
            {
                cout << i << ' ' << min(r, r - mn) << ' ' << max(r, (r - mn)) << '\n';
                return;
            }
        }
    else
        for (int i = r; i >= l; i--)
        {
            int md = m - (m / i) * i;
            int mn = min(md, i - md);
            if (mn <= r - l)
            {
                cout << i << ' ' << r << ' ' << (r - mn) << '\n';
                return;
            }
        }
    cout << r << ' ' << r << ' ' << r << '\n';
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