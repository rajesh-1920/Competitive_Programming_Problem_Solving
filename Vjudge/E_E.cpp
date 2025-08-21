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
    int n;
    cin >> n;
    vector<int> v(n);
    int c0 = 0, c1 = 0, c2 = 0;
    for (auto &it : v)
    {
        cin >> it;
        if (it % 3 == 0)
            c0++;
        if (it % 3 == 1)
            c1++;
        if (it % 3 == 2)
            c2++;
    }
    int x = n / 3;
    int mn = 0;
    while (c0 != x || c1 != x || c2 != x)
    {
        if (c0 > x)
            mn++, c0--, c1++;
        if (c1 > x)
            mn++, c1--, c2++;
        if (c2 > x)
            mn++, c2--, c0++;
    }
    cout << mn << '\n';
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