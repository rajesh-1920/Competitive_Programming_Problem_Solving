// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  18.01.2025

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

const double eps = 1e-1;
const ll inf = 9e15 + 7;
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    map<pair<ll, ll>, ll> tm;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        st.insert(i + 1);
        string s;
        cin >> s;
        for (ll j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                if (i < j)
                {
                    v.push_back({i + 1, j + 1});
                    tm[{i + 1, j + 1}]++;
                    tm[{j + 1, i + 1}]++;
                }
            }
        }
    }
    vector<ll> ans(n + 5, -1);
    map<ll, ll> mp;
    for (auto it : v)
    {
        auto it1 = find(all(ans), it.fi);
        auto it2 = find(all(ans), it.sc);
        if (*it1 == -1 && *it2 == -1)
        {
            *it1 = it.fi;
            *it2 = it.sc;
        }
    }
    // cout << 'a' << ' ';
    for (ll i = 1; i <= n; i++)
    {
        if (ans[i] == -1)
        {
            auto it = --st.end();
            ans[i] = *(it);
            st.erase(it);
        }
        cout << ans[i] << ' ';
    }
    cout << '\n';
}
//-----------------------------------------------------------------------------------------
int main()
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