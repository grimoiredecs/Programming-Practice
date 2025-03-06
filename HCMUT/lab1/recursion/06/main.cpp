#include <iostream>
#include <string>
using namespace std;

/**
 * Recursively replicate the string `sub` exactly `n` times.
 * No loops are used, only recursion.
 */
string replicate(const string &sub, int n) {
    // Base case: replicating zero times yields an empty string
    if (n <= 0) {
        return "";
    }
    // Recursive case: one copy + replicate the rest (n-1) times
    return sub + replicate(sub, n - 1);
}

/**
 * Recursively expand the substring of `s` starting from index `i`.
 * 
 * - If we see a digit (e.g., '3'), we then expect '(' after it.
 *   We'll recursively expand the substring inside the parentheses,
 *   then replicate that expansion `n` times.
 * - If we see a lowercase letter, we just add it to the result.
 * - We stop expanding (and return) when we reach the end of the string
 *   or encounter a `)` so that the caller knows we've closed a parenthesis group.
 *
 * This function returns the expanded string and updates `i` to
 * reflect how many characters of `s` were consumed.
 */
string expandRec(const string &s, int &i) {
    // Base/stop condition:
    // If we're at the end of string or at a closing parenthesis, stop.
    if (i >= (int)s.size() || s[i] == ')') {
        return "";
    }

    // If the current character is a digit, handle the repetition block
    if (isdigit(s[i])) {
        int n = s[i] - '0';  // convert char digit to integer
        i++;                 // move past the digit

        // The next character should be '('
        // We skip it and recursively expand the substring inside.
        i++; // skip '('
        string inside = expandRec(s, i);

        // Now we should have stopped either at a ')' or end of substring
        // The caller expects a ')' to match, so skip it if present.
        if (i < (int)s.size() && s[i] == ')') {
            i++; // skip ')'
        }

        // Replicate the inside substring n times
        string repeated = replicate(inside, n);

        // Continue expanding what's after this pattern
        return repeated + expandRec(s, i);
    }
    else {
        // Otherwise, it's a lowercase letter
        char c = s[i];
        i++; // consume the letter
        // Append the letter and keep expanding
        return string(1, c) + expandRec(s, i);
    }
}

/**
 * The main function to call from outside:
 * Expands the given string `s` according to the problem's rules
 * and returns the resulting string of only lowercase letters.
 */
string expand(const string &s) {
    int i = 0;
    return expandRec(s, i);
}

// --------------------------------------------
// Example testing in a main():
// --------------------------------------------
int main() {
    string s = "2(ab3(cde)x)"; 
    cout << "Original: " << s << endl;
    string result = expand(s);
    cout << "Expanded: " << result << endl;
    // Expected: "abcdecdecdexabcdecdecdex"
    return 0;
}
