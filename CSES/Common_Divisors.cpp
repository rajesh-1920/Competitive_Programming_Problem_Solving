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
const int N = 1e6 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n, ans = 1, mx = 0;
    cin >> n;
    vector<int> mp(N, 0);
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, x);
    }
    for (int i = 2; i <= mx; i++)
    {
        int cnt = 0;
        for (int j = i; j <= mx; j += i)
        {
            if (mp[j] > 1)
            {
                ans = max(ans, i);
                break;
            }
            else if (mp[j])
                cnt++;
            if (cnt > 1)
            {
                ans = max(ans, i);
                break;
            }
        }
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