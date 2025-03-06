#include <iostream>
#include <vector>
#include <unordered_map>


int majorityElement(std::vector<int>& nums){
    std::unordered_map<int,int> mp;
    for(auto i : nums){
        mp[i]++;
    }
    int n = nums.size()/2;
    for(auto x: mp){
        if(x.second > n){
            return x.first;
        }
    }
    return 0;

}
