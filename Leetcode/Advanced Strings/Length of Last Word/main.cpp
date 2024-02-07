#include <bits/stdc++.h>
using namespace std;



int lengthOfLastWord(string s) 
    {
        int n = s.length();
       while (n > 0 && s[n - 1] == ' ') n--;
        int end = n;
        while (n > 0 && s[n - 1] != ' ') n--;
        return end - n;
        

    }


int main()
{
    string s = "Hello World";
    cout << lengthOfLastWord(s);
    return 0;
}