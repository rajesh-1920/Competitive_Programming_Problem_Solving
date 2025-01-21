// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  20.01.2025

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
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1, 0), ev;
    ll ans = 0, cur = 0;
    while (q--)
    {
        ll t, x;
        cin >> t >> x;
        if (t == 1)
        {
            ans++;
            v[x]++;
            ev.push_back(x);
        }
        else if (t == 2)
        {
            ans -= v[x];
            v[x] = 0;
        }
        else
        {
            for (ll i = 0; i < x; i++)
            {
                if (v[ev[i]] > 0)
                {
                    v[ev[i]]--;
                    ans--;
                }
            }
            //cur = x - 1;
        }
        cout << ans << '\n';
    }
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