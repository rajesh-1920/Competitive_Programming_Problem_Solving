// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  21.01.2025

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
    ll n;
    cin >> n;
    map<string, ll> mp;
    while (n--)
    {
        ll t;
        string s;
        cin >> t >> s;
        if (t == 1)
        {
            ll x;
            cin >> x;
            mp[s] += x;
        }
        if (t == 2)
            mp[s] = 0;
        if (t == 3)
            cout << mp[s] << '\n';
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