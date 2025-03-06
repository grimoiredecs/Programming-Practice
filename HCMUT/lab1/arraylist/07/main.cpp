#include <iostream>
#include <vector>

std::vector<int> updateArrayPerRange(std::vector<int>& nums, std::vector<std::vector<int>>& operations) {
    // STUDENT ANSWER
    for (auto arr : operations){
        for (int i = arr[0]; i <= arr[1];i++){
            nums[i] += arr[2];
        }
    }
    return nums;

}


int main(int charc, char** argv){

    std::vector<int> nums {13, 0, 6, 9, 14, 16};
std::vector<std::vector<int>> operations {{5, 5, 16}, {3, 4, 0}, {0, 2, 8}};
    std::vector<int> newVector = updateArrayPerRange(nums,operations);
    for ( auto num : newVector)
        std::cout << num << " ";
    return 0;
}