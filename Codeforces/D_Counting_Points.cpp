// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  10.03.2025

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
bool possible(int y)
{

}
void solve(void)
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v(n), srt(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].fi;
    set<int> st, pos;
    int mx = -inf;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].sc;
        mx = max(mx, v[i].sc + 10LL);
        for (int j = v[i].fi - v[i].sc; j <= v[i].fi + v[i].sc; j++)
            st.insert(j);
        srt[i].fi = v[i].fi - v[i].sc;
        pos.insert(v[i].fi - v[i].sc);
        srt[i].sc = i;
    }
    sort(all(srt));
    int i = 0, j = 0, ans = 0;
    for (auto it : st)
    {
        int l = 0, r = mx;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (possible(mid));
        }
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
    cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}