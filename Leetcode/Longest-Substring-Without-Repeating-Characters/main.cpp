#include <iostream>
#include <string>
#include <unordered_map>

/*
 * Use the Sliding Windows strategy
* */
int max(int a, int b){
    return (a>=b)? a : b;
}

int lengthOfLongestSubstring(std::string str){
    int strSize = str.length();
    std::unordered_map<char, int> mp;
    int res=0;
    int left = 0;
    int best = 0;
    for(int right =0; right < strSize;right++){
        while(mp[str[right]] !=0){
            left++;
            mp[str[right]] --;
        }
        res = right- left+1;
        best = max(res, best);
        
        mp[str[right]]++;

        
    }
    return best;
}

int main(int argc, char* arg[]){
    while(argc){
        std::cout << lengthOfLongestSubstring(argc[0])<<std::endl;
    }

    return 0;

}
