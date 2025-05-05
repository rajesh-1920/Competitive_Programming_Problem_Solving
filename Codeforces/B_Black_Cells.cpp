// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  05.05.2025

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
const int inf = 1e18 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
bool ok(vector<int> &v, int val)
{
    int cnt = 0, pos = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] > val)
        {
            if (cnt)
                return false;
            cnt = 1;
            pos = i;
        }
    }
    if (cnt)
    {
        if (v.size() & 1)
        {
            if (pos == 1 || pos == v.size() - 1)
                return true;
            int x = v[pos] - v[pos - 1];
            x /= 2;
            if (v[pos] - (v[pos - 1] + x) <= val)
                return true;
        }
        return false;
    }
    return true;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v));
    int ans = inf, l = 1, r = inf;
    while (l <= r)
    {
        int m = (r + l) / 2;
        if (ok(v, m))
        {
            ans = min(ans, m);
            r = m - 1;
        }
        else
            l = m + 1;
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