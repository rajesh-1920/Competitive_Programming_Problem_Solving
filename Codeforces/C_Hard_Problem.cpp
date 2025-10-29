
#include <bits/stdc++.h>
using namespace std;

// tazim vai

#define int long long int
inline int binpow(int a, int b, int _mod)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % _mod;
        a = (a * a) % _mod;
    }
    return res % _mod;
}
const int N = 1e6 + 10;
const int mod1 = 1e9 + 7, p1 = 137, mod2 = 1e9 + 9, p2 = 277;
vector<pair<int, int>> powers(N), inv_powers(N);
void precal()
{
    inv_powers[0] = powers[0] = {1, 1};
    int ip1 = binpow(p1, mod1 - 2, mod1);
    int ip2 = binpow(p2, mod2 - 2, mod2);
    for (int i = 1; i < N; i++)
    {
        powers[i].first = powers[i - 1].first * p1 % mod1;
        powers[i].second = powers[i - 1].second * p2 % mod2;

        inv_powers[i].first = inv_powers[i - 1].first * ip1 % mod1;
        inv_powers[i].second = inv_powers[i - 1].second * ip2 % mod2;
    }
}

pair<int, int> forward_hash(string &s)
{
    pair<int, int> hsh = {0, 0};
    for (int j = 0; j < s.size(); j++)
    {
        hsh.first = (hsh.first + (powers[j].first * s[j]) % mod1) % mod1;
        hsh.second = (hsh.second + (powers[j].second * s[j]) % mod2) % mod2;
    }
    return hsh;
}
pair<int, int> reverse_hash(string &s)
{
    pair<int, int> hsh = {0, 0};
    for (int j = s.size() - 1, i = 0; j >= 0; j--, i++)
    {
        hsh.first = (hsh.first + (powers[i].first * s[j]) % mod1) % mod1;
        hsh.second = (hsh.second + (powers[i].second * s[j]) % mod2) % mod2;
    }
    return hsh;
}

int ok(int n, int f, const vector<int> &v, const vector<pair<int, int>> forr,
       vector<pair<int, int>> revv)
{
    if (n == v.size())
        return 0;
    int ans = 0;
    
    return ans;
}
void solve(void)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    vector<pair<int, int>> forr(n), revv(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        forr[i] = forward_hash(s);
        revv[i] = reverse_hash(s);
    }
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
        precal();
        solve();
    }
    return 0;
}