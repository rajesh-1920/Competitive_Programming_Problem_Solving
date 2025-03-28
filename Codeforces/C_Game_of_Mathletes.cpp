// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  19.01.2025

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
const ll N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;

    for (auto &it : v)
        cin >> it;
    for (auto it : v)
        mp[it]++;
    ll cnt = 0;
    for (auto &it : mp)
    {
        ll need = k - it.first;
        if (mp.find(need) != mp.end())
        {
            if (it.first == need)
            {
                cnt += mp[it.first] / 2;
                mp[it.first] = 0;
            }
            else
            {
                ll pairs = min(mp[it.first], mp[need]);
                cnt += pairs;
                mp[it.first] -= pairs;
                mp[need] -= pairs;
            }
        }
    }
    cout << cnt << '\n';
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