#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> solveNQueens(int n) 
{
    vector<vector<string>> res;
    vector<string> nQueens(n, string(n, '.'));
    auto isValid = [&](int row, int col) 
    {
        for (int i = 0; i < row; i++) 
        {
            if (nQueens[i][col] == 'Q') return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) 
        {
            if (nQueens[i][j] == 'Q') return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) 
        {
            if (nQueens[i][j] == 'Q') return false;
        }
        return true;
    };
    function<void(int)> dfs = [&](int row) 
    {
        if (row == n) 
        {
            res.push_back(nQueens);
            return;
        }
        for (int col = 0; col < n; col++) 
        {
            if (isValid(row, col)) 
            {
                nQueens[row][col] = 'Q';
                dfs(row + 1);
                nQueens[row][col] = '.';
            }
        }
    };        

    dfs(0);
    return res;

    }


int main()
{
    int n;

    cin >> n;

    vector<vector<string>> res = solveNQueens(n);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}