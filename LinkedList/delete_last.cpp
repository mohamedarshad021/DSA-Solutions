#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10,NULL};
    Node* second = new Node{20,NULL};
    head->next = second;

    Node* temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;

    return 0;
}
