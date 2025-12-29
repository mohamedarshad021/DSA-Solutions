#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{20, NULL};
    Node* newNode = new Node{10, head};
    head = newNode;
    cout << head->data;
    return 0;
}
