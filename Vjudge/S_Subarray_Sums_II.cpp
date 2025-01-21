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
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n + 1), sum(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }
    map<ll, ll> mp;
    for (ll i = 0; i <= n; i++)
    {
        //cout<<sum[i]<<' ';
        sum[i] %= x;
        mp[sum[i]]++;
    }
    //cout<<'\n';
    ll cnt = 0;
    for (auto it : mp)
    {
        //cout<<it.fi<<' '<<it.sc<<'\n';
        cnt += it.sc - 1;
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
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}