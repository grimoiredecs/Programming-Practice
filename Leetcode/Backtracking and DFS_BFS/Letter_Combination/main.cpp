#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve(string digits, string res, int i, unordered_map<char, string>& mapping, vector<string>& ans) {
    if (i >= digits.length()) {
        ans.push_back(res);
        return;
    }
    char num = digits[i];
    string letters = mapping[num];
    for (int j = 0; j < letters.length(); j++) {
        solve(digits, res + letters[j], i + 1, mapping, ans);
    }
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

    vector<string> res;
    if (digits.empty()) return res; // Handle the edge case where digits is empty
    solve(digits, "", 0, phone, res);
    return res;
}

int main() {
    string digits = "23";
    vector<string> res = letterCombinations(digits);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}
