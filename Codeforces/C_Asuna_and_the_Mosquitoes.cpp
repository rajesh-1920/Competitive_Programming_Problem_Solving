// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  12.05.2025

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
    int n, od = 0, ev = inf, s = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        s += it;
        if (it & 1)
            od++;
        else
            ev = min(ev, it);
    }
    sort(rall(v));
    if (ev == inf || od == 0)
        cout << v[0] << '\n';
    else if (n <= 2)
        cout << s << '\n';
    else
    {
        if (v[0] % 2 == 0)
            ev--;
        cout << s - ev << '\n';
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