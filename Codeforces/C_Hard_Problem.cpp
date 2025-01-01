// Author:  Rajesh Biswas
// Date  :  15.12.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n';
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
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    ll ans = 0;
    ll t = m;
    if (a >= m)
    {
        ans += m;
        m = 0;
    }
    else
    {
        m -= a;
        ans += a;
        if (c >= m)
        {
            ans += m;
            c -= m;
        }
        else
        {
            ans += c;
            c = 0;
        }
    }
    m = t;
    if (b >= m)
    {
        ans += m;
        m = 0;
    }
    else
    {
        m -= b;
        ans += b;
        if (c >= m)
        {
            ans += m;
            c -= m;
        }
        else
        {
            ans += c;
            c = 0;
        }
    }

    cout << ans << '\n';
}
//-----------------------------------------------------------------------------------------
int main()
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