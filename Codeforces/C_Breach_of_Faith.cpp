// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  01.05.2025

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
    vector<int> v(2 * n), ans(2 * n + 1);
    set<int> st;
    for (auto &it : v)
    {
        cin >> it;
        st.insert(it);
    }
    sort(all(v));
    int s = 0, t = 1;
    for (int i = 0; i < n; i++)
    {
        s -= v[i], s += v[i + n];
        ans[t] = v[i + n];
        ans[t + 1] = v[i];
        t += 2;
    }
    for (int i = 1; i < 2 * n + 1; i++)
    {
        if (st.find(s) == st.end())
        {
            ans[0] = s;
            break;
        }
        t = s;
        int need;
        if (i & 1)
            t -= v[i], need = v[i] - t;
        else
            t += v[i], need = t - v[i];
        if (st.find(need) == st.end() && need > 0)
        {
            ans[0] = v[i];
            v[i] = need;
            break;
        }
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