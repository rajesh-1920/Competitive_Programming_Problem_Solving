// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  29.04.2025

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
int N = 1e9;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int xs, ys, xt, yt, xp, yp;
    cin >> xs >> ys >> xt >> yt >> xp >> yp;
    if (xp > xs)
    {
        cout << 3 << '\n';
        cout << -N << ' ' << ys << '\n';
        if (yt > ys)
        {
            cout << -N << ' ' << N << '\n';
            cout << xt << ' ' << N << '\n';
        }
        else
        {
            cout << -N << ' ' << -N << '\n';
            cout << xt << ' ' << -N << '\n';
        }
    }
    else
    {
        cout << 3 << '\n';
        cout << N << ' ' << ys << '\n';
        if (yt > ys)
        {
            cout << N << ' ' << N << '\n';
            cout << xt << ' ' << N << '\n';
        }
        else
        {
            cout << N << ' ' << -N << '\n';
            cout << xt << ' ' << -N << '\n';
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
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}