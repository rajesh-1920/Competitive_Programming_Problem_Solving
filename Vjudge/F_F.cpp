// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  27.08.2025

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
    int n;
    cin >> n;
    set<int> st;
    vector<int> v = {1,
                     11,
                     111,
                     1111,
                     11111,
                     111111,
                     1111111,
                     11111111,
                     111111111,
                     1111111111,
                     11111111111,
                     111111111111,
                     1111111111111,
                     11111111111111};
    for (auto it : v)
        for (auto ii : v)
            for (auto i : v)
                st.insert(i + ii + it);

    int ans = 3;
    for (auto it : st)
    {
        n--;
        ans = it;
        if (n == 0)
            break;
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
    // cin >> test;
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}