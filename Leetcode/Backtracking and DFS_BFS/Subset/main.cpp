#include <bits/stdc++.h>    
using namespace std;


vector<vector<int>> subsets(vector<int>& nums) 
{
    vector<vector<int>> res;
    vector<int> out;

    function<void(int)> dfs = [&] (int begin)
    {
        res.push_back(out);
        for(int i = begin; i < nums.size(); i++)
        {
            out.push_back(nums[i]);
            dfs(i + 1);
            out.pop_back();
        }
    };
    dfs(0);
    return res;
    }
    


int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = subsets(nums);
    for(auto i : res)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}