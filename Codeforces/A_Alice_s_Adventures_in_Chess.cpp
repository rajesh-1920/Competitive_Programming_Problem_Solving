// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  05.01.2025

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
const ll N = 1e9 + 10;
//-----------------------------------------------------------------------------------------
void solve(void)
{
    ll n, a, b;
    string s, temp;
    cin >> n >> a >> b >> s;
    temp = s;
    for (ll i = 0; i <= 100; i++)
        temp += s;
    s = temp;
    ll x = 0, y = 0;
    for (auto it : s)
    {
        if (x == a && y == b)
        {
            cout << "YES\n";
            return;
        }
        if (it == 'N')
            y++;
        if (it == 'S')
            y--;
        if (it == 'E')
            x++;
        if (it == 'W')
            x--;
    }
    cout << "NO\n";
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