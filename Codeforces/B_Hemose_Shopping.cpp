// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  09.08.2025

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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    set<pair<int, int>> pos;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pos.insert({v[i], i});
        mp[v[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int t1 = (*pos.begin()).sc;
        pos.erase(pos.begin());
        if (t1 == i)
            continue;
        int tt = (*(--pos.end())).fi;
        if (abs(v[i] - v[t1]) >= x)
        {
            pos.erase(pos.find({v[i], i}));
            pos.insert({v[i], t1});
            swap(v[i], v[t1]);
        }
        else if (abs(v[0] - v[t1]) >= x || abs(tt - v[t1]) >= x)
            break;
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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