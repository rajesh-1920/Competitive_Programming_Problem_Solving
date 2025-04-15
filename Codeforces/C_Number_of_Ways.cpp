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
    s = v[0];
    for (int i = 1; i + 1 < n; i++)
    {
        if (s == need)
        {
            pos = i;
            break;
        }
        if (s > need)
        {
            cout << 0;
            return;
        }
        s += v[i];
    }
    int pos2 = n - 2;
    s = v[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        if (s == need)
        {
            pos2 = i;
            break;
        }
        if (s > need)
        {
            cout << 0;
            return;
        }
        s += v[i];
    }
    if (pos > pos2)
    {
        cout << 0;
        return;
    }
    int cnt = 0;
    while (pos < pos2)
    {
        if (v[pos])
            break;
        cnt++;
        pos++;
    }
    // dbg(cnt);
    int ans = cnt + 1;
    cnt = ans;
    while (pos < pos2)
    {
        if (v[pos2])
            break;
        pos2--;
        ans += cnt;
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