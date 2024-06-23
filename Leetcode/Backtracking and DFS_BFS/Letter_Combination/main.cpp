#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void solve(string digits, string res, int i , string mapping[], vector<string>& ans){
    if (i >= digits.length()){
        ans.push_back(res);
        return;
    }
    int num = digits[i]-'0';

}
vector<string> letterCombinations(string digits) {

    unordered_map<char, string> phone;
    phone['2'] = "abc";
    phone['3'] = "def";
    phone['4'] = "ghi";
    phone['5'] = "jkl";
    phone['6'] = "mno";
    phone['7'] = "pqrs";
    phone['8'] = "tuv";
    phone['9'] = "wxyz";
    int n = digits.size();

    vector<string> res ;


}
int main(){

    return 0;
}
