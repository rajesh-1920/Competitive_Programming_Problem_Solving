// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.08.2025

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
    int n, c0 = 0, c1 = 0, g = 0;
    cin >> n;
    vector<int> v(n);
    set<int> st;
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
    else if (n & 1)
        cout << 1 << '\n';
    else
    {
        int mx = 0;
        for (int i = 0; i < (n / 2); i++)
            mx = max(mx, (abs(v[i] - v[n / 2 + i])));
        for (int i = 2; i * i <= mx + 5; i++)
        {
            if (mx % i == 0)
            {
                int fl = 1;
                for (int j = 0; j < n / 2; j++)
                {
                    if (v[j] % i != v[n / 2 + j] % i)
                    {
                        fl = 0;
                        break;
                    }
                }
                if (fl)
                {
                    cout << 2 << '\n';
                    return;
                }
                fl = 1;
                for (int j = 0; j < n / 2; j++)
                {
                    if (v[j] % (mx / i) != v[n / 2 + j] % (mx / i))
                    {
                        fl = 0;
                        break;
                    }
                }
                if (fl)
                {
                    cout << 2 << '\n';
                    return;
                }
            }
        }
        cout << 1 << '\n';
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