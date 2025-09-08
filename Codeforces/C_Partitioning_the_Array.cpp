// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.08.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n';
// #define int long long int
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
    int n, c0 = 0, c1 = 0, g = 0;
    cin >> n;
    vector<int> v(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (n % (i + 1) == 0)
            st.insert(i + 1), st.insert(n / (i + 1));
        cin >> v[i];
        if (v[i] & 1)
            c1++;
        else
            c0++;
        g = gcd(g, v[i]);
    }
    if (c0 == 0 || c1 == 0 || g > 1)
        cout << st.size() << '\n';
    else
    {
        unordered_set<int> ans;
        for (auto it : st)
        {
            int mx = 0;
            for (int i = 0; i < it; i++)
                for (int k = i; k + it < n; k += it)
                    mx = max(mx, (abs(v[k] - v[k + it])));
            if (mx == 0)
                ans.insert(it);
            for (int ii = 1; ii * ii <= mx; ii++)
                if (mx % ii == 0)
                {
                    int fl = 1, f = 1;
                    for (int i = 0; i < it; i++)
                        for (int k = i; k + it < n; k += it)
                        {
                            if (v[k] % ii != v[k + it] % ii)
                                fl = 0;
                            if (v[k] % (mx / ii) != v[k + it] % (mx / ii))
                                f = 0;
                            if (f + fl == 0)
                                break;
                        }
                    if ((fl && ii > 1) || (f && mx / ii > 1))
                    {
                        ans.insert(it);
                        break;
                    }
                }
        }
        cout << ans.size() << '\n';
    }
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