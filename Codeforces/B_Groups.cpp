// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  28.02.2025

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
    vector<vector<int>> v(n, vector<int>(5));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> v[i][j];
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
        {
            int cn1 = 0, cn2 = 0, cn = 0;
            for (int t = 0; t < n; t++)
            {
                if (v[t][i] && v[t][j])
                    cn++;
                else if (v[t][i])
                    cn1++;
                else if (v[t][j])
                    cn2++;
            }
            if (cn1 <= n / 2 && cn2 <= n / 2 && (cn1 + cn2 + cn) >= n)
            {
                cout << "YES\n";
                return;
            }
        }
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