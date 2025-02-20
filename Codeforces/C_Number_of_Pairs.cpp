// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  19.02.2025

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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    list<int> temp;
    for (auto &it : v)
    {
        cin >> it;
        temp.push_back(it);
    }
    int ans = 0;
    temp.sort();
    for (int i = 0; i < n; i++)
    {
        temp.erase(find(all(temp), v[i]));
        int x = l - v[i];
        int y = r - v[i];
        auto it1 = lower_bound(all(temp), x);
        auto it2 = upper_bound(all(temp), y);
        if (it2 == temp.begin())
            continue;
        if (*it1 > y)
            continue;
        it2--;
        if (*it2 < x)
            continue;
        ans += distance(it1, it2) + 1;
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