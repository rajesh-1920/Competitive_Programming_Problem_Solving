// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.08.2025

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
void solve(void)
{
    int n;
    cin >> n;
    int x = n / 2;
    int sq = sqrtl(x);
    if (sq * sq == x && n > 1 && n % 2 == 0)
        cout << "YES\n";
    else
    {
        x = n / 4;
        sq = sqrtl(x);
        if (x == sq * sq && n > 1 && n % 4 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
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