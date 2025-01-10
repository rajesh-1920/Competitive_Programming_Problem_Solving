// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  07.01.2025

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const ll inf = 9e15 + 7;
const ll MOD = 1e9 + 7;
const ll N = 1e9 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    ll n, m, p, ans = 0;
    cin >> n >> m >> p;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    sort(all(a));
    vector<ll> pre(n + 2, 0);
    for (ll i = 0; i < n; i++)
        pre[i + 1] = a[i] + pre[i];
    pre[n + 1] = pre[n];
    for (ll i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        ll need = (p - b);
        ll x = upper_bound(all(a), need) - a.begin();
        x--;
        ans += (n - x - 1) * p + b * (x + 1) + pre[x + 1];
        //dbg(x);
    }
    cout << ans;
}
//-----------------------------------------------------------------------------------------
int main()
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