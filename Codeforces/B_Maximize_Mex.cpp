// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  06.06.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
// #define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
// const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n, m;
    cin >> n >> m;
    set<int> st;
    multiset<int> temp;
    for (int i = 0; i <= n; i++)
        st.insert(i);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (st.find(x) != st.end())
            st.erase(x);
        else
            temp.insert(x);
    }
    set<int> ss;
    for (auto it : st)
    {
        int t = it % m, fl = 1, x = it;
        while (t <= it && x >= t)
        {
            if (temp.find(t) != temp.end())
            {
                temp.erase(temp.find(t)), fl = 0;
                break;
            }
            if (temp.find(x) != temp.end())
            {
                temp.erase(temp.find(x)), fl = 0;
                break;
            }
            t += m;
            x -= m;
        }
        if (fl)
        {
            cout << it << '\n';
            return;
        }
        else
            ss.insert(it);
    }
    for (auto it : ss)
        st.erase(it);
    cout << (*st.begin()) << '\n';
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