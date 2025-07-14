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
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int ans = 0, lx = 1, rx = m, ly = 1, ry = n;
    while (true)
    {
        if (rx == lx && ly == ry)
            break;
        int ar1 = (a - lx) * (ry - ly + 1);
        int ar2 = (rx - a) * (ry - ly + 1);
        int ar3 = (rx - lx + 1) * (b - ly);
        int ar4 = (rx - lx + 1) * (ry - b);
        int mx = max({ar1, ar2, ar3, ar4});
        if (mx == ar1)
            lx = a;
        else if (mx == ar2)
            rx = a;
        else if (mx == ar3)
            ly = b;
        else
            ry = b;
        if (rx == lx && ly == ry)
        {
            ans++;
            break;
        }
        int t1 = (lx + rx) / 2;
        int t2 = (ly + ry) / 2;
        if (t1 == a && t2 == b)
        {
            if (t1 + 1 <= rx)
                a = t1 + 1, b = t2;
            else if (t1 - 1 >= lx)
                a = t1 - 1, b = t2;
            else if (t2 + 1 <= ry)
                a = t1, b = t2 + 1;
            else if (t2 + 1 <= ry)
                a = t1, b = t2 - 1;
            else
                break;
        }
        else
            a = t1, b = t2;
            
        dbg(lx);
        dbg(rx);
        dbg(ly);
        dbg(ry);
        dbg(a);
        dbg(b);
        ans++;
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