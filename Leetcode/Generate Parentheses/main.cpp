#include <cmath>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
vector<string> res;
void dfs(string str, int a, int b, int n) {
  if (a + b == n * 2) {
    res.push_back(str);
    return;
  }
  if (a == n) {
    dfs(str + ')', a, b + 1, n);
  } else if (a > b) {
    dfs(str + ')', a, b + 1, n);
    dfs(str + '(', a + 1, b, n);
  } else { // a==b>
    dfs(str + '(', a + 1, b, n);
  }
}
vector<string> generateParenthesis(int n) {
  dfs("(", 1, 0, n);
  return res;
}
int main() { return 0; }