// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  22.04.2025

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
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1, 0);
    map<int, int> mp;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        v[i] = v[i - 1] + t;
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] %= x;
        if (mp[v[i]] == 0)
        {
            mp[v[i]] = i;
            st.insert(i);
        }
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        st.erase(mp[v[i]]);
        if (st.size())
        {
            int it = *(st.begin());
            mx = max(mx, i - it + 1);
        }
        st.insert(mp[v[i]]);
    }
    if (mx == 0)
        mx = -1;
    cout << mx << '\n';
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