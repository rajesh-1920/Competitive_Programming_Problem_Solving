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
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;
//------------------------------(solve)----------------------------------------------------
void solve(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    sort(all(s1));
    sort(all(s2));
    if (s1 == "AB" || s1 == "BC" || s1 == "CD" || s1 == "DE" || s1 == "AE")
    {
        if (s2 == "AB" || s2 == "BC" || s2 == "CD" || s2 == "DE" || s2 == "AE")
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    if (s1 == "AC" || s1 == "AD" || s1 == "BD" || s1 == "BE" || s1 == "CE")
    {
        if (s2 == "AC" || s2 == "AD" || s2 == "BD" || s2 == "BE" || s2 == "CE")
            cout << "Yes\n";
        else
            cout << "No\n";
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
        solve();
    }
    return 0;
}