#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = newNode;
    }
}

void deleteNode(Node** head, int key) {
    
    if (*head == nullptr) {
        return;
    }

    Node* temp = *head;
    Node* prev = nullptr;


    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }


    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }


    if (temp == nullptr) {
        return;
    }


    prev->next = temp->next;
    delete temp;
}

void displayList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);

    cout << "Original list: ";
    displayList(head);

    deleteNode(&head, 3);

    cout << "After deleting 3: ";
    displayList(head);

    return 0;
}