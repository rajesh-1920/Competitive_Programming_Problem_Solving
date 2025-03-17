// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  04.03.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
// #define int long long int
#define ll long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const int inf = 9e16 + 7;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // multiple value
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // single
// ordered_set<ll> st; //must use ll
// ll pos = st.order_of_key(5);
// ll val = *st.find_by_order(2);
//-----------------------------------------------------------------------------------------
void solve(void)
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    vector<ll> b(n);
    for (auto &it : b)
        cin >> it;

    ordered_set<ll> st;
    st.insert(b[n - 1] - a[n - 1]);
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        ans += st.order_of_key(a[i] - b[i]);
        st.insert(b[i] - a[i]);
    }
    cout << ans;
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