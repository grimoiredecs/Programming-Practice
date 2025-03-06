#include <iostream>

class LLNode {
    public:
        int val;
        LLNode* next;
        LLNode(); // Constructor: val = 0, next = nullptr
        LLNode(int val, LLNode* next); // Constructor with customized data
    };
    

LLNode* reverseLinkedList(LLNode* head){
   if (!head)   return nullptr;
   LLNode* curr = head;
   LLNode* prev = nullptr;
   LLNode* next;
   while (curr){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
   }
   return prev;


}


int main(){
    return 0;
}