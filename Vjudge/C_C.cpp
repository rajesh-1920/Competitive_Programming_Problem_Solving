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
const int N = 1e6 + 10;
//------------------------------(solve)----------------------------------------------------
set<int> st;
void ss()
{
    for (int i = 0; i <= 5000; i++)
    {
        if (i * 2020 > N)
            break;
        for (int j = 0; j <= 5000; j++)
        {
            if (2020 * i + 2021 * j >= N)
                break;
            st.insert(2020 * i + 2021 * j);
        }
    }
}
void solve(void)
{
    int n;
    cin >> n;
    if (st.find(n) != st.end())
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
    ss();
    for (T = 1; T <= test; T++)
    {
        // cout << "Case " << T << ": ";
        solve();
    }
    return 0;
}