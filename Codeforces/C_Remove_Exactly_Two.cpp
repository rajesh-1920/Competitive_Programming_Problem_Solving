// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.01.2025

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
const ll N = 2e5 + 10;
//-----------------------------------------------------------------------------------------
vector<ll> g[N], in(N + 10), vis(N + 10), out(N + 10);
void dfs(ll n, ll par)
{
    in[n]++;
    vis[n] = 0;
    for (auto it : g[n])
    {
        if (it == par)
            continue;
        in[n]++;
        dfs(it, n);
    }
}

void dfs1(ll n, ll t)
{
    vis[n] = 1;
    out[n]++;
    for (auto it : g[n])
    {
        if (vis[it] == 1 || it == t)
            continue;
        out[n]++;
        dfs1(it, t);
    }
}

void solve(void)
{
    ll n;
    cin >> n;
    for (ll i = 1; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // dbg(1);
    in[1] = -1;
    dfs(1, -1);
    vector<pair<ll, ll>> pb;
    for (ll i = 1; i <= n; i++)
        pb.push_back({in[i], i});
    sort(rall(pb));
    g[pb[0].sc].clear();

    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (vis[i] == 1 || i == pb[0].sc)
            continue;
        // dbg(i);
        cnt++;
        out[i]--;
        dfs1(i, pb[0].sc);
    }
    //----------------------removeing first--------------------------------
    vector<pair<ll, ll>> ppb;
    for (ll i = 1; i <= n; i++)
    {
        // cout << i << ' ' << out[i] << '\n';
        out[i] = max(0ll, out[i]);
        ppb.push_back({out[i], i});
    }
    sort(rall(ppb));
    cnt += ppb[0].fi - 1;
    cout << cnt << '\n';

    for (ll i = 1; i <= n; i++)
    {
        in[i] = out[i] = 0;
        vis[i] = 0;
        g[i].push_back(1);
        g[i].clear();
    }
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