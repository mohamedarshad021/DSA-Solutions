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

    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout<<count;
    return 0;
}
