// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  16.06.2025

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
    int n1, n2;
    string s1, s2, t;
    cin >> n1 >> n2;
    s1 = to_string(n1);
    s2 = to_string(n2);
    t = s1;
    int fl = 0, fg = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (fl)
            t[i] = '*';
        else
        {
            int t1 = s1[i] - '0', t2 = s2[i] - '0';
            if (t1 + 1 == t2)
            {
                if (i + 1 < s1.size())
                    if (s1[i + 1] == '9')
                        t[i] = s2[i];

                if (t1 + 1 < t2)
                {
                    t[i] = '*';
                    fl = 1;
                }
            }
        }
        dbg(t);
        int ans = 0;
        for (int i = 0; i < t.size(); i++)
            if (t[i] == s1[i])
                ans++;
        for (int i = 0; i < t.size(); i++)
            if (t[i] == s2[i])
                ans++;
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