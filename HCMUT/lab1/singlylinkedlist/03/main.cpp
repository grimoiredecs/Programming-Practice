#include <iostream>
#include <sstream>

class LinkedList{
public:
class Node;
private:
    Node* head;
    Node* tail;
    int size;
public: 
    class Node {
        private: 
            int value;
            Node* next;
            friend class LinkedList;
        public:
            Node() {
                this->next = NULL;
            }
            Node(Node* node) {
                this->value = node->value;
                this->next = node->next;
            }
            Node(int value, Node* next = NULL) {
                this->value = value;
                this->next = next;
            }
    };
    LinkedList(): head(NULL), tail(NULL), size(0) {};

void partition(int k)
{
    Node* l1Head = nullptr; Node* l1Tail = nullptr;
    Node* l2Head = nullptr; Node* l2Tail = nullptr;
    Node* l3Head = nullptr; Node* l3Tail = nullptr;

    Node* current = head;
    while (current != nullptr){
        Node* nextNode = current->next; 
        current->next = NULL;
        if (current-> value < k){
            if (l1Head == nullptr){
                l1Head=current;
                l1Tail = l1Head;
            }
            else{
                l1Tail->next = current;
                l1Tail = current;
            }
        }
        else if (current->value == k){
            if (l2Head == nullptr){
                l2Head = current;
                l2Tail = l2Head;
            }
            else {
                l2Tail->next = current;
                l2Tail = current;
            }
        }
        else {
            if (l3Head == nullptr){
                l3Head = current;
                l3Tail = l3Head;
            }
            else{
                l3Tail->next = current;
                l3Tail = current;
            }
        }
        current = nextNode;
    }

    if (l1Tail != nullptr){
        l1Tail->next = l2Head;
        
    }
    else
        l1Head = l2Head;
    if (l2Tail != nullptr){
        l2Tail->next = l3Head;
    }
    else 
        l2Head = l3Head;
    if (l3Tail){
        l3Tail-> next = nullptr;
    } 
    head = l1Head;
    tail = l3Tail;

 //k   l1Tail->next = l2Head;
//    l2Tail->next = l3Head;
}
};

int main(int argc, char** argv){
    return 0;
}