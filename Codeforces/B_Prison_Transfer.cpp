// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  01.02.2025

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
    int n, c, t;
    cin >> n >> t >> c;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    if (n < c)
    {
        cout << 0;
        return;
    }
    multiset<int> st;
    for (int i = 0; i < c; i++)
        st.insert(v[i]);
    int ans = 0;
    if (*(--st.end()) <= t)
        ans++;
    for (int i = c; i < n; i++)
    {
        st.insert(v[i]);
        st.erase(st.find(v[i - c]));
        if (*(--st.end()) <= t)
            ans++;
    }
    cout << ans;
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