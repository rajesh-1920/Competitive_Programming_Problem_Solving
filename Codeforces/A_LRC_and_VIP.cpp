// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  06.05.2025

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
    set<int> st;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        st.insert(it);
    }
    if (st.size() == 1)
        cout << "No\n";
    else
    {
        cout << "Yes\n";
        for (auto it : v)
        {
            if (it == *(--st.end()))
                cout << 2 << ' ';
            else
                cout << 1 << ' ';
        }
        cout << '\n';
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