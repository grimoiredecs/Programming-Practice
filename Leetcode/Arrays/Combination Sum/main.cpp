#include <bits/stdc++.h>
using namespace std;
//backtracking with lambda function
 vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
{

    vector<vector<int>> res;   
    vector<int> temp;
    int n = candidates.size();
    sort(candidates.begin(), candidates.end());
    for (int i=1; i < n; i++)
    {
        if (candidates[i] == candidates[i-1])
        {
            candidates.erase(candidates.begin() + i);
            i--;
            n--;
        }
    }
    function<void(int, int)> backtrack = [&](int start, int remain)
    {
        if (remain < 0)
        {
            return;
        }
        if (remain == 0)
        {
            res.push_back(temp);
            return;
        }
        for (int i=start; i < n; i++)
        {
            temp.push_back(candidates[i]);
            backtrack(i, remain - candidates[i]);
            temp.pop_back();
        }
    };
    backtrack(0, target);
    return res;

        
}

int main()
{
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> res = combinationSum(candidates, target);
    for (auto i: res)
    {
        for (auto j: i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}