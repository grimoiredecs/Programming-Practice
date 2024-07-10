#include <iostream>
#include <vector>

/*
You are given a 0-indexed array of integers nums of length n.
You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from index i.
In other words, if you are at nums[i], you can jump to any nums[i + j] where:

0 <= j <= nums[i] and
i + j < n
Return the minimum number of jumps to reach nums[n - 1].
The test cases are generated such that you can reach nums[n - 1].
*/
using namespace std;
//let's try to solve this using greedy algorithm
// just try to get the BIGGEST LEAP from each entry in the vector
int jump(vector<int>& nums) {
    int n = nums.size();
    for(int i =0; i < nums.size(); i++){
        nums[i] = max(nums[i-1], nums[i]+i);
    }
    int idx = 0;
    int res=0;
    while(idx < n){
        res++;
        idx = nums[idx];
    }
    return res;
}



int main(){

    return 0;
}
