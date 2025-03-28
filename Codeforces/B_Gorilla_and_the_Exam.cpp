// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  11.01.2025

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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (auto &it : v)
    {
        cin >> it;
        mp[it]++;
    }
    vector<pair<ll, ll>> vp;
    for (auto it : mp)
        vp.push_back({it.sc, it.fi});
    sort(all(vp));

    for (auto it : vp)
    {
        if (it.fi <= k)
        {
            k -= it.fi;
            mp.erase(it.sc);
        }
        else
            break;
    }
    cout << max(1ll, 1ll * mp.size()) << '\n';
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