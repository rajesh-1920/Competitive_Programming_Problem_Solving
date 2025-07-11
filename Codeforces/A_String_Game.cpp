// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  16.06.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
// #define int long long int
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
    string s, p;
    cin >> s >> p;
    vector<int> v(s.size());
    for (auto &it : v)
        cin >> it;
    int ans = 0, l = 0, r = s.size();
    while (l <= r)
    {
        int m = (l + r) / 2;
        set<int> st;
        for (int i = 0; i < m; i++)
            st.insert(v[i] - 1);

        int i = 0, j = 0;
        while (j < p.size() && i < s.size())
        {
            if (st.find(i) == st.end() && s[i] == p[j])
                j++;
            i++;
        }
        if (j == p.size())
            ans = max(ans, m), l = m + 1;
        else
            r = m - 1;
    }
    cout << ans << '\n';
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