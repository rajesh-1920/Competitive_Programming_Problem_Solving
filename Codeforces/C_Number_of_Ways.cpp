// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  14.02.2025

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
    int n;
    cin >> n;
    vector<int> v(n), sum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum[i + 1] = sum[i] + v[i];
    }
    if (n < 3 || sum[n] % 3)
    {
        cout << 0;
        return;
    }
    int need = sum[n] / 3;
    int st = 1, ls = 1;
    for (int i = 1; i <= n; i++)
        if (sum[i] == need)
        {
            st = i + 1;
            break;
        }
    for (int i = n - 1; i >= 1; i--)
        if (sum[n] - sum[i] == need)
        {
            ls = i;
            break;
        }
    sum[st - 1] = 0;
    int cnt = 1;
    for (int i = st; i < ls; i++)
    {
        sum[i] = v[i - 1] + sum[i - 1];
        if (sum[i] == 0)
            cnt++;
    }
    sum[ls + 1] = 0;
    for (int i = ls; i > st; i--)
    {
        sum[i] = v[i - 1] + sum[i + 1];
        if (sum[i] == 0)
            cnt++;
    }
    cout << cnt;
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