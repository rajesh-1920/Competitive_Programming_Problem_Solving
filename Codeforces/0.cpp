// Author:  Rajesh Biswas
// CF    :  rajesh-1920
// Date  :  16.02.2025

#include <bits/stdc++.h>
using namespace std;
//----------------------------(definition section)-----------------------------------------
#define dbg(x) cout << #x << " = " << x << '\n'
// #define int long long int
#define fi first
#define sc second

#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()

// const double eps = 1e-1;
// const int inf = 9e16 + 7;
// const int MOD = 1e9 + 7;

// //-----------------------------------------------------------------------------------------
// bool issafe(vector<string> &board, int &row, int &col)
// {
//     for (int i = 0; i < board.size(); i++)
//         if (board[i][col] == 'Q' || board[row][i] == 'Q')
//             return false;
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
//         if (board[i][j] == 'Q')
//             return false;
//     for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++)
//         if (board[i][j] == 'Q')
//             return false;
//     return true;
// }

// void place(vector<string> &board, int row, vector<vector<string>> &ans)
// {
//     if (row == board.size())
//     {
//         ans.push_back(board);
//         return;
//     }
//     for (int i = 0; i < board.size(); i++)
//     {
//         if (issafe(board, row, i))
//         {
//             board[row][i] = 'Q';
//             place(board, row + 1, ans);
//             board[row][i] = '.';
//         }
//     }
// }

// void solve(void)
// {
//     int n;
//     cin >> n;
//     vector<string> board(n, string(n, '.'));
//     vector<vector<string>> ans;
//     place(board, 0, ans);
//     dbg(ans.size());
//     for (auto v : ans)
//     {
//         for (auto it : v)
//         {
//             for (auto ii : it)
//                 cout << ii << ' ';
//             cout << '\n';
//         }

//         cout << '\n';
//         cout << '\n';
//     }
// }
// //-----------------------------------------------------------------------------------------
const int n = 1e7 + 10;
int v[n]={1};
void solve()
{
    cout << v[0] << '\n';
}

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