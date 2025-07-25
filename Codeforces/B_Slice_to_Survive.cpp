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
    int an1 = 0, an2 = 0;
    a = min(a, (n - a + 1));
    b = min(b, (m - b + 1));
    while (n > 1)
    {
        n = (n + 1) / 2;
        an1++;
    }
    int t1 = b;
    while (t1 > 1)
    {
        t1 = (t1 + 1) / 2;
        an1++;
    }
    while (m > 1)
    {
        m = (m + 1) / 2;
        an2++;
    }
    t1 = a;
    while (t1 > 1)
    {
        t1 = (t1 + 1) / 2;
        an2++;
    }
    cout << min(an1, an2) + 1 << '\n';
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