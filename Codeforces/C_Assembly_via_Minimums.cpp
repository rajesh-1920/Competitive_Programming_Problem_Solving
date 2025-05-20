// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  18.05.2025

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
const int inf = 1e9;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; 2 * i < (n * (n - 1)); i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> v(n, inf);

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.size() == 0)
            break;
        for (auto it : mp)
        {
            if (it.sc == i)
            {
                v[i] = it.fi;
                mp.erase(it.fi);
                break;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.size() == 0)
            break;
        if (v[i] == inf)
        {
            int mx = 0, t = inf, vl = 0;
            for (auto it : mp)
            {
                if (it.sc == i)
                {
                    v[i] = it.fi;
                    t = it.fi;
                    break;
                }
                if (mx < it.sc)
                {
                    mx = it.sc;
                    vl = it.fi;
                }
            }
            if (t == inf)
            {
                v[i] = vl;
                mp[vl] = mp[vl] - i;
            }
            else
                mp.erase(t);
        }
    }
    reverse(all(v));
    for (auto it : v)
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