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
    int n;
    cin >> n;
    vector<int> v(n);
    multiset<int> temp;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        while (v[i] > n)
            v[i] /= 2;
        temp.insert(v[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        st.insert(i);
        if (temp.find(i) != temp.end())
        {
            temp.erase(temp.find(i));
            st.erase(i);
        }
    }
    while (st.size() && temp.size())
    {
        int t = *temp.begin();
        temp.erase(temp.begin());
        while (t)
        {
            if (st.find(t) != st.end())
            {
                st.erase(t);
                break;
            }
            t /= 2;
        }
    }
    if (st.size() == 0)
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