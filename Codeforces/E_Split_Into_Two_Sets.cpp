// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  19.10.2025

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
void solve(void)
{
    int n;
    cin >> n;
    vector<int> g[n + 1];
    set<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        //g[y].push_back(x);
        st.insert({x, y});
        //st.insert({y, x});
    }
    for (int i = 1; i <= n; i++)
        for (auto it : g[i])
            for (auto ii : g[i])
                if (st.find({it, ii}) != st.end())
                {
                    cout << "NO\n";
                    return;
                }
    cout << "YES\n";
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