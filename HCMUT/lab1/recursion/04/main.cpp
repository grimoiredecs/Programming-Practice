#include <iostream>
#include <string>

bool isPalindrome(std::string str){
    if (str[-1] != str[0] ){
        return false;
    }
    if (str.length() ==1){
        return true;
    }
    else return isPalindrome(str++);
}
