#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, NULL};
    int key = 10;
    if(head->data == key)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
