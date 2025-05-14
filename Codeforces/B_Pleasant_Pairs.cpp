// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  12.05.2025

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
    vector<int> v(n + 5);
    set<pair<int, int>> ans;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j * v[i] <= 2 * n; j++)
        {
            if (v[i] * j - i >= 0)
            {
                int pos = v[i] * j - i;
                if (pos > i && pos <= n)
                {
                    //dbg(pos);
                    if (v[i] * v[pos] == i + pos)
                        ans.insert({i, pos});
                }
            }
        }
    }
    cout << ans.size() << '\n';
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