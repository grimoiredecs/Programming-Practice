#include <bits/stdc++.h>
using namespace std;
int k =12;
static int speedup = []() { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); return 0; }();
 vector<vector<int>> threeSum(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    int n  = nums.size();
    for (int i=0; i < n-1; i++)
    {
        int l = i+1; 
        int r = n-1;
        while (l<r)
        {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum ==0)
            {
                res.push_back({nums[i], nums[l], nums[r]});
                while (l<r && nums[l] == nums[l+1]) l++;
                while (l<r && nums[r] == nums[r-1]) r--;
                l++;
                r--;
            }
            else if (sum < 0)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return res;
}

int main()
{
    int k =12;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
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