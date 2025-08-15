// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  15.08.2025

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
    int A, B, n;
    cin >> A >> B >> n;
    vector<pair<int, int>> v(n);
    for (auto &it : v)
        cin >> it.fi;
    for (auto &it : v)
        cin >> it.sc;

    for (int i = 0; i < n; i++)
    {
        int t = v[i].sc / A;
        if (v[i].sc % A)
            t++;
        B -= (v[i].fi * t);
    }

    for (int i = 0; i < n; i++)
    {
        B += v[i].fi;
        if (B > 0)
        {
            cout << "YES\n";
            return;
        }
        B -= v[i].fi;
    }
    if (B == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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