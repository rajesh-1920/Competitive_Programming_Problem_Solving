// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  01.02.2025

#include <bits/stdc++.h>
using namespace std;
//-----------------------------------------------------------------------------------------
class Solution
{
    typedef long long int ll;
// cout << fixed << showpoint << setprecision(10);
#define dbg(x) cout << #x << " = " << x << '\n'
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

    const double eps = 1e-1;
    const ll inf = 9e15 + 7;
    const ll MOD = 1e9 + 7;
    const ll N = 1e9 + 10;

public:
    string findValidPair(string s)
    {
        map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        string ans = "";
        for (int i = 0; i + 1 < s.size(); i++)
        {
            int tm = s[i] - '0';
            int tt = s[i + 1] - '0';
            // dbg(tt);
            // dbg(mp[s[i + 1]]);
            if (tt == mp[s[i + 1]] && tm == mp[s[i]] && s[i] != s[i + 1])
            {
                ans.push_back(s[i]);
                ans.push_back(s[i + 1]);
                break;
            }
        }
        if (ans.size() == 1)
            ans.pop_back();
        return ans;
    }
};
//-----------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        Solution aa;
        string s;
        cin >> s;
        cout << aa.findValidPair(s);
    }
    return 0;
}