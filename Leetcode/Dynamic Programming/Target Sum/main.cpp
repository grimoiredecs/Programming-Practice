#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int fun(vector<int>& nums, int target, int i, vector<vector<int>> &dp, vector<int>& v, int l){      
        if(target==0 && i==nums.size()){//cout<<v[i]<<"*"<<i<<endl;
            return v[i+1]+1;
        }
        if(i==nums.size())return 0;
        if(dp[i][target] != -1)return dp[i][target];

        int fir=0;
        if(target>=nums[i])fir=fun(nums, target-nums[i], i+1, dp, v, i);
        int sec=fun(nums, target, i+1, dp, v, l);

        return dp[i][target]=fir+sec;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int>v(nums.size()+5, 0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]==0)v[i+1]=v[i]*2 +1;
            else v[i+1]=v[i];
           // cout<<i<<" "<<v[i+1]<<endl;
        } 
        //////////////////////////////////////////////
        int dif=sum-abs(target);
        if(dif<0 || dif%2==1)return 0;
        ///////////////////////////////////////////////
        dif/=2;
        vector<vector<int>>dp(nums.size(), vector<int>(dif+1 , -1));
        return fun(nums, dif, 0, dp, v,0);
    }
};
int main()
{
    
    return 0;
}