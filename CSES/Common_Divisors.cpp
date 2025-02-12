// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  13.02.2025

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
    int n, ans = 1, mx = 0;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, x);
    }
    for (auto it : mp)
        if (it.sc > 1)
            ans = max(ans, it.fi);
        else
            for (int j = 2 * it.fi; j <= mx; j += it.fi)
                if (mp.find(j) != mp.end())
                {
                    ans = max(ans, it.fi);
                    break;
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