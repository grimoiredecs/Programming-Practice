#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> subsetsWithDup(vector<int>& nums) 
{
    vector<vector<int>> res;
    vector<int> out;
    sort(nums.begin(), nums.end());
    function<void(int)> dfs = [&] (int begin)
    {
        res.push_back(out);
        for(int i = begin; i < nums.size(); i++)
        {
            if(i > begin && nums[i] == nums[i - 1]) continue;
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
    return 0;
}