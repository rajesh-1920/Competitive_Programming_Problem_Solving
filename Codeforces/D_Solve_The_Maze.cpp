// Author:  Rajesh Biswas
// CF    :  rajesh_1920
// Date  :  04.01.2026

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
const int inf = 1e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> gg(n, vector<char>(m)), bb(n, vector<char>(m));
    vector<vector<int>> g(n, vector<int>(m, -1)), b(n, vector<int>(m, -1));
    queue<pair<int, int>> good, bad;
    for (int i = 0; i < n; i++)

        for (int j = 0; j < m; j++)
        {
            cin >> gg[i][j];
            bb[i][j] = gg[i][j];
            if (bb[i][j] == 'G')
                good.push({i, j}), g[i][j] = 0;
            if (bb[i][j] == 'B')
                bad.push({i, j}), b[i][j] = 0;
        }
    if (good.empty() || bad.empty())
    {
        cout << "Yes\n";
        return;
    }
    vector<int> dx = {0, 0, -1, 1}, dy = {1, -1, 0, 0};
    while (!good.empty())
    {
        int x = good.front().fi, y = good.front().sc;
        good.pop();
        for (int i = 0; i < 4; i++)
        {
            int tx = x + dx[i], ty = y + dy[i];
            if(tx>=0&&tx<n&&ty>=0&&ty<m&&gg[tx][ty]=='.'){
                gg[tx][ty]=='.';
            }
        }
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