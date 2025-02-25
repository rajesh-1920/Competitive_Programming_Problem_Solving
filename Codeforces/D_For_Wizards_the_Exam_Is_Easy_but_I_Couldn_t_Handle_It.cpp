// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  25.02.2025

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
    vector<int> v(n), cnt(n, 0);
    for (auto &it : v)
        cin >> it;
    int mx = 0, al = -1, ar = 1;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            if (v[i] > v[j])
                cnt[i]++;
            if (mx < cnt[i])
            {
                mx = cnt[i];
                al = i + 1;
            }
        }
    if (al == -1)
        cout << 1 << ' ' << ar << '\n';
    else
    {
        for (int i = n - 1; i >= 0; i--)
            if (v[i] < v[al - 1])
            {
                ar = i + 1;
                break;
            }
        cout << al << ' ' << ar << '\n';
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