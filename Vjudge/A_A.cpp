// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  30.05.2025

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
    string s;
    cin >> n >> s;
    map<char, int> mp;
    set<int> st;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;
    char ch = (*mp.begin()).fi;
    for (int i = 0; i < n; i++)
        if (s[i] == ch)
            st.insert(-i);

    string ans = "";
    int fl = 0;
    for (int i = 0; i < n; i++)
    {
        if (fl == 1)
        {
            if (s[i] == ch)
            {
                if (st.find(-i) != st.end())
                    ans += s[i];
            }
            else
                ans += s[i];
        }
        else
        {
            if (s[i] == ch)
            {
                ans += s[i];
                mp[ch]--;
            }
            else if (fl == 0)
            {
                mp[ch]--;
                ans += ch;
                st.erase(st.begin());
                i--;
                fl = 1;
            }
            if (mp[ch] == 0)
                fl = 1;
        }
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