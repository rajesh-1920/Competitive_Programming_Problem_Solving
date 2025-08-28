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
const int MOD = 1000003853;
const int N = 1e6 + 10;
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() < s2.size())
    {
        cout << 0;
        return;
    }
    vector<int> v(s2.size(), 0);
    for (int i = 1; i < s2.size(); i++)
    {
        int x = v[i - 1];
        while (x && s2[i] != s2[x])
            x = v[x - 1];
        if (s2[i] == s2[x])
            x++;
        v[i] = x;
    }
    int ans = 0, i = 0, j = 0;
    while (i < s1.size())
    {
        if (s1[i] == s2[j])
        {
            i++, j++;
            if (j == s2.size())
                ans++;
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = v[j - 1];
        }
    }
    cout << ans << '\n';

    //  int base = 27;
    //  vector<int> powbase(N, 1);
    //  for (int i = 1; i < N; i++)
    //      powbase[i] = (base * powbase[i - 1]) % MOD;
    //  int hash = 0;
    //  reverse(all(s2));
    //  for (int i = 0; i < s2.size(); i++)
    //      hash = (hash + (s2[i] - 'a' + 1) * powbase[i]) % MOD;
    //  int cmp = 0;
    //  for (int i = s2.size() - 1; i >= 0; i--)
    //      cmp = (cmp + (s1[i] - 'a' + 1) * powbase[s2.size() - i - 1]) % MOD;
    //  int ans = 0;
    //  for (int i = s2.size(); i < s1.size(); i++)
    //  {
    //      if (cmp == hash)
    //          ans++;
    //      int t = ((s1[i - s2.size()] - 'a' + 1) * powbase[s2.size() - 1]) % MOD;
    //      cmp = (cmp - t) % MOD;
    //      cmp = (cmp * base + (s1[i] - 'a' + 1)) % MOD;
    //  }
    //  if (cmp == hash)
    //      ans++;
    //  cout << ans << '\n';
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