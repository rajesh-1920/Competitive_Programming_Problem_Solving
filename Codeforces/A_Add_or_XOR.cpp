// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  06.07.2025

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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b)
    {
        if ((a ^ 1) == b)
            cout << y << '\n';
        else
            cout << -1 << '\n';
    }
    else if (a == b)
        cout << 0 << '\n';
    else
    {
        if (x <= y)
            cout << (b - a) * x << '\n';
        else
        {
            int ev = 0, od = 0;
            for (int i = a; i < b; i++)
                if (i & 1)
                    od++;
                else
                    ev++;
            cout << (od * x) + (ev * y) << '\n';
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