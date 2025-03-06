#include <iostream>
#include <vector>


bool consecutiveOnes(std::vector<int>& nums){
    bool met=0;
    bool not1=0;
    for( int i =0; i < nums.size(); i++){
        if(nums[i] ==1){
            if (not1==1){
                return false;
            }
            met =1;
        }
        else {
            if (met ==1){
                not1 =1;
            }
        }

    }
    return true;
}
int main(int argc, char** argv){
    std::vector<int> nums {0,1,1,1,1,8,1,9,1};
    std::cout << consecutiveOnes(nums);
    return 0;

}