// Author:  Rajesh Biswas
// CF    :  rajesh_1920
// Date  :  04.01.2026

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n';
#define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//------------------------------(solve)----------------------------------------------------
void dfs(int n, vector<int> &vis, vector<int> &par, vector<int> &depth,
         vector<int> &temp, vector<vector<int>> &v)
{
    vis[n] = 1;
    temp.push_back(n);
    for (auto it : v[n])
        if (!vis[it])
        {
            par[it] = n;
            depth[it] = depth[n] + 1;
            dfs(it, vis, par, depth, temp, v);
        }
}
void solve(void)
{
    int n;
    cin >> n;
    vector<vector<int>> v(n + 1);
    map<int, int> mp;
    for (int i = 1, x; i <= n; i++)
    {
        cin >> x;
        if (mp.find(x) == mp.end())
            mp[x] = i;
        auto it = mp.lower_bound(x);
        if (it != mp.begin())
        {
            it--;
            if ((*it).fi == x - 1)
                v[(*it).sc].push_back(i);
        }
    }
    vector<int> ans = {1}, vis(n + 1, 0), par(n + 1, 0), depth(n + 1, 0);
    for (int i = 1; i <= n; i++)
        if (!vis[i])
        {
            vector<int> temp;
            dfs(i, vis, par, depth, temp, v);

            int mx = 0, p = i;
            for (auto it : temp)
                if (mx < depth[it])
                    mx = depth[it], p = it;
            temp.clear();
            while (p != 0)
            {
                temp.push_back(p);
                p = par[p];
            }
            if (temp.size() > ans.size())
                ans = temp;
        }
    reverse(all(ans));
    cout << ans.size() << '\n';
    for (auto it : ans)
        cout << it << ' ';
    cout << '\n';
}
//-----------------------------------------------------------------------------------------
signed main()
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