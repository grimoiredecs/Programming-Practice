#include <iostream>
#include <vector>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
    int j =0;
    for(int i =0; i < m; i++){
        while(nums1[i] >= nums2[j]){
            nums1.insert(nums1.begin()+i,nums2[j]);
            ++j;
        }
    }
}

int main(){


    return 0;
}
