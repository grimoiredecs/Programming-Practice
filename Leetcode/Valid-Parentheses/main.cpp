#include <iostream>
#include <string>
#include <stack>



bool isValid(std::string str){
    std::stack<char> st;
    for(auto ch: str){
        if (ch== '(','{','[')
        {
            st.push(ch);
        }
        else if (ch == ')'){
            char tmp = st.pop();
            if (tmp == '('){
                continue;
            }
            else return false;
        }
        else if (ch == ']'){
            char tmp = st.pop();
            if (tmp == '['){
                continue;
            }
            else return false;
        }
        else if (ch == '}'){
            char tmp = st.pop();
            if (tmp == '{'){
                continue;
            }
            else return false;
        }
    }
    return true;

}
