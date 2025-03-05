// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  04.03.2025

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
    int n, k;
    cin >> n >> k;
    if (n % 3 == 0)
        cout << n / 3 << ' ' << n / 3 << ' ' << n / 3 << '\n';
    else if (n & 1)
        cout << n / 2 << ' ' << n / 2 << ' ' << 1 << '\n';
    else if (n % 3 == 1)
        cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << '\n';
    else
    {
        if (n % 4)
            cout << n / 2 - 1 << ' ' << n / 2 - 1 << ' ' << 2 << '\n';
        else
            cout << n / 2 << ' ' << n / 4 << ' ' << n / 4 << '\n';
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