// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  08.03.2025

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
    int n;
    cin >> n;
    map<int, vector<pair<int, int>>> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        int t = x / n;
        mp[t].push_back({x % n, i});
    }
    for (auto it : mp)
    {
        set<pair<int, int>> st;
        for (auto ii : mp[it.fi])
        {
            st.insert(ii);
            if (ii.fi < ii.sc)
            {
                cout << ii.sc;
                return;
            }
        }
        for (auto ii : st)
        {
            cout << ii.sc;
            return;
        }
    }
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