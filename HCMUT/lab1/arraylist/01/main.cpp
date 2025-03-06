#include <iostream>
#include <algorithm>

int buyCar(int* nums, int length, int k) {
    // Step 1: Sort the car prices in ascending order
    std::sort(nums, nums + length);
    
    int count = 0;  // To track the number of cars bought
    int totalCost = 0;  // To track the total cost of cars bought
    
    // Step 2: Try to buy cars until the budget runs out
    for (int i = 0; i < length; i++) {
        if (totalCost + nums[i] <= k) {
            totalCost += nums[i];
            count++;
        } else {
            break;  // If the next car exceeds the budget, stop buying
        }
    }
    
    return count;  // Return the total number of cars the person can buy
}


int main(int argc, char** argv){


    return 0;
}