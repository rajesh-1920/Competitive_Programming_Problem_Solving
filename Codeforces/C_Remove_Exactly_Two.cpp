// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  10.08.2025

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
void solve(void)
{
    int n;
    cin >> n;
    vector<set<int>> v(n + 5);
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].insert(y);
        v[y].insert(x);
    }
    priority_queue<pair<int, int>> pq, pp;
    for (int i = 1; i <= n; i++)
        pq.push({v[i].size(), i});
    int ans = pq.top().fi;
    int t = pq.top().sc;

    for (auto it : v[t])
        v[it].erase(t);
    for (int i = 1; i <= n; i++)
        if (i != t)
            pp.push({v[i].size(), i});
    
    t = pp.top().fi;
    ans += (t - 1);
    cout << ans << '\n';
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