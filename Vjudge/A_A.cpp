// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  15.08.2025

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
    int d, x;
    cin >> d >> x;
    int t = 1;
    for (int i = 0; i < d; i++)
        t *= 2;
    if (x < 0)
        x = -x;
    if (x >= (t * 2))
        cout << "NO\n";
    else
    {
        cout << "YES ";
        if (x == 0)
            cout << 0 << '\n';
        else if (x & 1)
            cout << d + 1 << '\n';
        else
        {
            int ans = d;
            for (int i = 1; i < 62; i++)
            {
                int tm = 1LL << i;
                int tt = (x - tm);
                if (tt % (tm * 2) == 0)
                {
                    cout << ans << '\n';
                    return;
                }
                ans--;
            }
        }
    }
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