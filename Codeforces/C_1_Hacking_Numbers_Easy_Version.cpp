#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x;
    cout << "digit\n"; // 1
    cin >> x;
    cout << "digit\n"; // 2
    cin >> x;
    cout << "digit\n"; // 3
    cin >> x;
    cout << "add -5\n"; // 4
    cin >> x;
    cout << "div 2\n"; // 5
    cin >> x;
    if (x == 1)
    {
        cout << "div 2\n"; // 6.111
        cin >> x;
    }
    else
    {
        cout << "div 3\n"; // 6.111
        cin >> x;
    }

    cout << "mul " << n << '\n'; // 7
    cin >> x;
    cout << "!\n";
    cin >> x;
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}
