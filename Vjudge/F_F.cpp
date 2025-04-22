// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.04.2025

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
    int n, ans = 0, d, p;
    cin >> n >> d >> p;
    vector<int> v(n), total(n + 5, 0);
    for (auto &it : v)
    {
        cin >> it;
        ans += it;
    }
    sort(rall(v));
    for (int i = 1; i <= n; i++)
        total[i] = total[i - 1] + v[i - 1];
    for (int i = 1; i <= n;)
    {
        if (i + d - 1 <= n)
        {
            int t = total[i + d - 1] - total[i - 1];
            if (t > p)
            {
                // dbg(t);
                ans -= t;
                ans += p;
                i = i + d;
            }
            else
                i++;
        }
        else
        {
            int t = total[n] - total[i - 1];
            // dbg(t);
            if (t > p)
            {
                ans -= t;
                ans += p;
            }
            break;
        }
        // dbg(ans);
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
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}