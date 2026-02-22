#include <iostream>
#include<stdlib.h>
using namespace std;

struct ListNode{
    int val;
    struct Listnode *next;
}ListNode, start;

void reverseList(ListNode* start) {
    ListNode* prev = nullptr;
    ListNode* current = start;
    ListNode* next_node = nullptr;

    while (current != nullptr) {
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }

    return prev;
}

void printList(ListNode* start) {
    while (start != nullptr) {
        cout << start->val << " -> ";
        start = start->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    ListNode* start = new ListNode(1);
    start->next = new ListNode(2);
    start->next->next = new ListNode(3);
    start->next->next->next = new ListNode(4);
    start->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(start);

    ListNode* reversedstart = reverseList(start);

    cout << "Reversed list: ";
    printList(reversedstart);

    return 0;
}