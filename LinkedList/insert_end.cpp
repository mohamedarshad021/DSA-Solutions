#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, NULL};
    Node* newNode = new Node{20, NULL};
    head->next = newNode;
    return 0;
}
