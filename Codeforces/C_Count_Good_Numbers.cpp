// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.07.2025

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
    int l, r;
    cin >> l >> r;
    int ans = (r - l + 1);

    vector<int> v;
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(5);
    v.emplace_back(7);
    int sum = 0;
    for (int ms = 1; ms < (1 << 4); ++ms)
    {
        int cnt = 0, x = 1;
        for (int i = 0; i < 4; i++)
            if (ms >> i & 1)
            {
                cnt++;
                x = x * v[i] / gcd(x, v[i]);
            }
        if (cnt % 2 == 1)
            sum += r / x - (l - 1) / x;
        else
            sum -= r / x - (l - 1) / x;
    }
    cout << ans - sum << '\n';
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