// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  29.04.2025

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
const int N = 1e6 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    string ss, sd, sm;
    vector<int> cnt(N, 0);
    cin >> ss >> sd >> sm;
    int d = 0, t = 1, ans = -1;
    for (int i = sd.size() - 1; i >= 0; i--)
    {
        if (sd[i] == '1')
            d += t;
        t *= 2;
        if (d > sm.size())
        {
            ans = sm.size();
            goto out;
        }
    }
    for (int i = 0; i < d; i++)
    {
        if (sm.size() == 0)
        {
            ans = i;
            goto out;
        }
        sm.pop_back();
    }
    reverse(all(ss));
    ans = d;
    for (; 1; ans++)
    {
        if (ans % d == 0)
        {
            reverse(all(sm));
            while (sm.size() > ss.size())
                ss.push_back('0');
            while (sm.size() < ss.size())
                sm.push_back('0');
            int carry = 0;
            for (int i = 0; i < sm.size(); i++)
            {
                if (carry)
                {
                    if (sm[i] == '1' && ss[i] == '1')
                        sm[i] = '1', carry = 1;
                    else if (sm[i] == '1' || ss[i] == '1')
                        sm[i] = '0';
                    else
                        sm[i] = '1', carry = 0;
                }
                else
                {
                    if (sm[i] == '1' && ss[i] == '1')
                        sm[i] = '0', carry = 1;
                    else if (sm[i] == '1' || ss[i] == '1')
                        sm[i] = '1';
                    else
                        sm[i] = '0';
                }
            }
            if (carry)
                sm.push_back('1');
            while (sm.size())
            {
                if (sm.back() == '1')
                    break;
                sm.pop_back();
            }
            reverse(all(sm));
        }
        if (sm.size() == 0)
            goto out;
        cnt[sm.size()]++;
        if (cnt[sm.size()] > 5 && sm.size() >= d)
        {
            cout << "Infinite money!";
            return;
        }
        sm.pop_back();
    }
out:
    string temp = "";
    while (ans)
    {
        if (ans & 1)
            temp.push_back('1');
        else
            temp.push_back('0');
        ans /= 2;
    }
    reverse(all(temp));
    cout << temp << '\n';
    return;
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