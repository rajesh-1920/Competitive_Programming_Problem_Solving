// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.02.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n, st, en;
    cin >> n >> st >> en;
    vector<vector<int>> gh(n + 1);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        gh[u].push_back(v);
        gh[v].push_back(u);
    }

    if (st == en)
    {
        cout << st << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i != st)
                cout << i << " ";
        }
        cout << '\n';
        return;
    }

    vector<int> parent(n + 1, -1);
    queue<int> q;
    q.push(st);
    parent[st] = st;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : gh[u])
        {
            if (parent[v] == -1)
            {
                parent[v] = u;
                q.push(v);
            }
        }
    }

    vector<int> path;
    for (int u = en; u != st; u = parent[u])
    {
        path.push_back(u);
    }
    path.push_back(st);
    reverse(path.begin(), path.end());

    vector<int> permutation;
    for (int u : path)
    {
        permutation.push_back(u);
    }
    for (int u = 1; u <= n; u++)
    {
        if (find(path.begin(), path.end(), u) == path.end())
        {
            permutation.push_back(u);
        }
    }

    for (int u : permutation)
    {
        cout << u << " ";
    }
    cout << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
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