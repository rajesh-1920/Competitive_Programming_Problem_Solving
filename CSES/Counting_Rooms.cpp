// Author:  Rajesh Biswas
// Date  :  22.11.2024

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
//----------------------------(definition section)-------------------------------------
#define f(i, a, b) for (ll i = a; i < b; i++)
#define scv(v, n) f(i, 0, n) cin >> (v[i]);
#define dbg(x) cout << #x << " = " << x << '\n'
#define rrr return
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

#define PI acos(-1)
#define MOD 1000000007
#define eps 0.0000000001
#define inf 90000000000000

#define base1 1000002089
#define base2 1000003853
#define hashmod 1000002989
#define N 1009
//------------------------------------------------------------------------------------
ll xx[] = {1, -1, 0, 0};
ll yy[] = {0, 0, 1, -1};
bool vis[N][N];
ll n, m;
vector<vector<char>> grid(N, vector<char>(N));
bool isvalid(ll x, ll y)
{
    return (x > 0 and y > 0 and x <= n and y <= m);
}
void dfs(ll x, ll y)
{
    vis[x][y] = true;
    f(i, 0, 4)
    {
        if (!isvalid(x + xx[i], y + yy[i]))
            continue;
        if (vis[x + xx[i]][y + yy[i]] || grid[x + xx[i]][y + yy[i]] == '#')
            continue;
        dfs(x + xx[i], y + yy[i]);
    }
}
void solve(void)
{
    cin >> n >> m;
    f(i, 1, n + 1)
    {
        f(j, 1, m + 1) cin >> grid[i][j];
    }
    ll cnt = 0;
    f(i, 1, n + 1)
    {
        f(j, 1, m + 1)
        {
            if (vis[i][j] || grid[i][j] == '#')
                continue;
            cnt++;
            dfs(i, j);
        }
    }
    cout << cnt << '\n';
}
//------------------------------------------------------------------------------------
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
/*
freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/