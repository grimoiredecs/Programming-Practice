#include <iostream>
#include <string>

template <class T>
class SLinkedList {
public:
    class Node;
protected:
    Node* head;
    Node* tail;
    int count;
public:
    SLinkedList();
    ~SLinkedList();
    void add(T& e);
    void add(int index, T& e);
    int size();
public:
    class Node {
    private:
        T data;
        Node* next;
        friend class SLinkedList<T>;
    public:
        Node() : next(nullptr) {}
        Node(T data, Node* next = nullptr) : data(data), next(next) {}
    };
};

template <class T>
SLinkedList<T>::SLinkedList() : head(nullptr), tail(nullptr), count(0) {}

template <class T>
SLinkedList<T>::~SLinkedList() {
    Node* curr = head;
    while (curr) {
        Node* next = curr->next;
        delete curr;
        curr = next;
    }
    head = tail = nullptr;
    count = 0;
}

template <class T>
void SLinkedList<T>::add(T& e) {
    Node* tmp = new Node(e, nullptr);
    if (!head) {
        head = tail = tmp;
    } else {
        tail->next = tmp;
        tail = tmp;
    }
    count++;
}

template <class T>
void SLinkedList<T>::add(int index, T& e) {
    if (index < 0 || index > count) return;
    Node* tmp = new Node(e, nullptr);
    if (index == 0) {
        tmp->next = head;
        head = tmp;
        if (count == 0) tail = tmp;
    } else {
        Node* curr = head;
        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }
        tmp->next = curr->next;
        curr->next = tmp;
        if (tmp->next == nullptr) tail = tmp;
    }
    count++;
}

template <class T>
int SLinkedList<T>::size() {
    return count;
}

int main() {
    SLinkedList<int> list;
    int size = 10;
    for (int index = 0; index < size; index++) {
        int val = index;
        list.add(val);
    }
    std::cout << "List size: " << list.size() << std::endl;
    return 0;
}
