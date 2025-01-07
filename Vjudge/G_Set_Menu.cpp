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
    vector<ll> pre(n + 1, 0);
    for (ll i = 0; i < n; i++)
        pre[i + 1] = a[i] + pre[i];

    for (ll i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        ll need = (p - b);
        if (a[0] >= need)
        {
            ans += (p * n);
            continue;
        }
        if (a[n - 1] < need)
        {
            ans += (b * n + pre[n]);
            continue;
        }
        // dbg(i);
        // dbg(need);
        ll l = 0, r = n - 1, temp = 0;
        while (r > l)
        {
            ll mm = (r + l) / 2;
            if (a[mm] > need)
                r = mm - 1;
            else
            {
                l = mm + 1;
                temp = mm;
            }
        }
        l = temp;
        // dbg(l);
        ll tt = b * (l + 1) + pre[l + 1];
        ll pp = p * (m - l - 1);
        // dbg(m - l - 1);
        ans += b * (l + 1) + pre[l + 1];
        ans += p * (n - l - 1);
        // cout << '\n';
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