// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  25.03.2025

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
    int n, mm, k;
    cin >> n >> mm >> k;
    int ans = mm;
    int l = 1, r = mm;
    while (l <= r)
    {
        int m = (r + l) / 2;
        // dbg(m);
        int can = (mm / (m + 1));
        int t = mm % (m + 1);
        // dbg(m);
        // dbg(mm);
        // dbg(can);
        // dbg(can * mm * m + t);
        if ((can * m + t) * n >= k)
        {
            ans = min(ans, m);
            r = m - 1;
        }
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