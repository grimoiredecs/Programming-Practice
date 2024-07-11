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
       if (n <= 1) return 0;

       int jumps = 0, current_end = 0, farthest = 0;

       for (int i = 0; i < n - 1; i++) {
           farthest = max(farthest, i + nums[i]);

           if (i == current_end) {
               jumps++;
               current_end = farthest;

               if (current_end >= n - 1) break;
           }
       }

       return jumps;
}



int main(){
    vector<int> arr{2,3,1,1,4};
    cout << jump(arr);

    return 0;
}
