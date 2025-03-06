#include <iostream>
#include <string>
#include <unordered_map>


int romanToInt(string str){
    int res = 0;
    unordered_map<char,int> mp = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000};
    for(int i =0; i < str.length();i++){
        if (mp[str[i+1]] > mp[str[i]] && i < str.length()-1){
            res  -= mp[str[i]];
        }

        res += mp[str[i]];
    }
    
}


int main(int argc, char** argv){

    
    return 0;
}
