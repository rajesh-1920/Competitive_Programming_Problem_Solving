// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  17.01.2025

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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v)
        cin >> it;
    cin >> n;
    ll mx = 0;
    while (n--)
    {
        ll h, w;
        cin >> w >> h;
        if (mx < v[w - 1])
            mx = v[w - 1];
        cout << mx << '\n';
        mx += h;
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