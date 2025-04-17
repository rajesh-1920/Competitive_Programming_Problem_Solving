// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  13.04.2025

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
    int n, s = 0, c = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        s += it;
        if (it == 0)
            c++;
    }
    if (n < 3 || s % 3)
    {
        cout << 0;
        return;
    }
    if (c == n)
    {
        n -= 2;
        cout << (n * (n + 1)) / 2;
        return;
    }

    int need = s / 3, pos = 1;
    vector<int> cnt(n, 0), sum(n, 0);
    s = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s + v[i] == need)
            cnt[i] = 1;
        s += v[i];
    }
    sum[n - 1] = cnt[n - 1];
    for (int i = n - 2; i >= 0; i--)
        sum[i] = sum[i + 1] + cnt[i];
    int ans = 0;

    s = 0;
    for (int i = 0; i + 2 < n; i++)
    {
        if (s + v[i] == need)
            ans += sum[i + 2];
        // dbg(sum[i + 2]);
        s += v[i];
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