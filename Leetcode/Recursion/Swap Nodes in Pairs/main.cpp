#include <bits/stdc++.h>
using namespace std;


struct ListNode 
{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* swapPairs(ListNode* head) 
{
    if (!head || !(head->next))
        return nullptr;
    
    
    ListNode* tmp = head->next->next;
    ListNode* temp = head->next;
    temp->next = head;
    head->next = swapPairs(tmp);
    return temp;
}


int main()
{


    return 0;
}



