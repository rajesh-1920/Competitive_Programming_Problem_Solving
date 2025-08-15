// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  15.08.2025

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
//------------------------------(solve)----------------------------------------------------
void dfs(int n, vector<int> &vis, vector<int> g[], set<int> &st)
{
    vis[n] = 1;
    st.insert(n);
    for (auto it : g[n])
    {
        if (vis[it])
            continue;
        dfs(it, vis, g, st);
    }
}
void solve(void)
{
    int n;
    cin >> n;
    vector<int> g[n + 1], vis(n + 1, 0), ans(n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        g[i].push_back(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        set<int> st;
        dfs(i, vis, g, st);
        for (auto it : st)
            ans[it - 1] = st.size();
    }

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
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}