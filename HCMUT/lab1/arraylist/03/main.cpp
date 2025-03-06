#include <iostream>
#include <vector>



int equalSumIndex(std::vector<int>& nums){
    int total=0;
    for (int num:nums){
        total+=num;
    }
    int half = total/2;
    for(int i =0;i < nums.size();i++){
        total = total - nums[i];
        if (total == half)
            return i ;
       
        }
    return -1;
}
