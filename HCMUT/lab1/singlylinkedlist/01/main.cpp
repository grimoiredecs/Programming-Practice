#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <algorithm>

class LLNode {
    public:
        int val;
        LLNode* next;
        LLNode();
        LLNode(int val, LLNode* next);
};


LLNode* addLinkedList(LLNode* l0, LLNode* l1){
    int v0=0;
    int v1=0;
    LLNode* tmp1 = l0;
    int lvl0 = 1;
    while (tmp1 != nullptr){
        lvl0 *= l0->val;
        v0 += lvl0; 
    }
}

int main(int argc, char** argv){


    return 0;
}