// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.03.2025

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
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        sum += it;
    }
    long double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        long double t = i;
        long double x = n;
        long double y = v[i - 1];
        dbg(t/x);
        ans += (t / x);
    }
    cout << ans << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
{
    cout << fixed << showpoint << setprecision(10);
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