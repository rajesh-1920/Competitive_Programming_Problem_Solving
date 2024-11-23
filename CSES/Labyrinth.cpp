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
ll xx[] = {0, 0, 1, -1};
ll yy[] = {1, -1, 0, 0};
ll n, m;
bool isvalid(ll x, ll y)
{
    return (x > 0 && y > 0 && x <= n && y <= m);
}
char grid[N][N];
ll len[N][N];
ll stx, sty, enx, eny;
void bfs()
{
    queue<pair<ll, ll>> q;
    q.push({enx, eny});
    len[enx][eny] = 0;
    vector<vector<pair<pair<ll, ll>, char>>> par(N, vector<pair<pair<ll, ll>, char>>(N));
    par[enx][eny] = {{-1, -1}, '0'};
    while (!q.empty())
    {
        ll x = q.front().fi;
        ll y = q.front().sc;
        // cout << x << ' ' << y << '\n';
        // if (x == stx && y == sty)
        //     break;
        q.pop();
        f(i, 0, 4)
        {
            if (!isvalid(x + xx[i], y + yy[i]))
                continue;
            if (grid[x + xx[i]][y + yy[i]] == '#')
                continue;
            if (len[x + xx[i]][y + yy[i]] > len[x][y] + 1)
            {
                if (xx[i] == 0)
                {
                    if (yy[i] == 1)
                        par[x + xx[i]][y + yy[i]] = {{x, y}, 'L'};
                    else
                        par[x + xx[i]][y + yy[i]] = {{x, y}, 'R'};
                }
                else if (xx[i] == 1)
                    par[x + xx[i]][y + yy[i]] = {{x, y}, 'U'};
                else
                    par[x + xx[i]][y + yy[i]] = {{x, y}, 'D'};

                len[x + xx[i]][y + yy[i]] = len[x][y] + 1;
                q.push({x + xx[i], y + yy[i]});
            }
        }
    }
    if (len[stx][sty] >= 10000000000000)
        cout << "NO\n";
    else
    {
        cout << "YES\n"
             << len[stx][sty] << '\n';
        while (true)
        {
            if (stx == enx && sty == eny)
                break;
            // cout << stx << ' ' << sty << ' ';
            cout << par[stx][sty].sc;
            ll cc = stx;
            stx = par[stx][sty].fi.fi;
            sty = par[cc][sty].fi.sc;
        }
        // LDDRRRRU
        // LDDRRRRRU
    }
}
void solve(void)
{
    cin >> n >> m;
    f(i, 1, n + 1)
    {
        f(j, 1, m + 1)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
                stx = i, sty = j;
            if (grid[i][j] == 'B')
                enx = i, eny = j;
            len[i][j] = 10000000000000;
        }
    }
    bfs();
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