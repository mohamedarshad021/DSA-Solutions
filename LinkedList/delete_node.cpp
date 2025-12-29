#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, NULL};
    delete head;
    head = NULL;
    return 0;
}
