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
const int N = 1e3 + 10;
//------------------------------(solve)----------------------------------------------------
vector<int> v(N, -1);
int ok(int n, int &p6, int &p8, int &p12)
{
    if (n <= 0)
        return 0;
    if (v[n] != -1)
        return v[n];
    int ans = ok(n - 6, p6, p8, p12) + p6;
    ans = min(ans, ok(n - 8, p6, p8, p12) + p8);
    ans = min(ans, ok(n - 12, p6, p8, p12) + p12);
    return v[n] = ans;
}
void solve(void)
{
    int n, p6, p8, p12;
    cin >> n >> p6 >> p8 >> p12;
    cout << ok(n, p6, p8, p12) << '\n';
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