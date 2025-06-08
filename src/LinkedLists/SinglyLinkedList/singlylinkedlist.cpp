#include "singlylinkedlist.h"
#include "node.h"
#include <iostream>
using namespace std;

//Constructor Implementation
SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;     //Initializes list with a nullptr head
}


//Singly addFirst Implementation
void SinglyLinkedList::addFirst(int element) {
    node* newNode = new node(element);
    newNode->next = head;   //Link new node to current head
    head = newNode;     //Update head to the new node
}

//Singly addLast Implementation
void SinglyLinkedList::addLast(int element) {
    node* newNode = new node(element);
    if (!head) {    //If the list is empty, set head to new node
        head = newNode;
    }else {
        node* curr = head;
        while (curr->next) {    //Traverse to the end of the list
            curr = curr->next;
        }
        curr->next = newNode;   //Link the last node to the new node
    }
}

//Singly removeFirst Implementation
int SinglyLinkedList::removeFirst() {
    if (!head) {    //Check if list is empty
        cout << "List is empty" << endl;
        return -1;
    }
    int temp = head->element;   //Store the first node's element
    node* curr = head;
    head = head->next;  //Move head to the next node
    delete curr;    //Free the memory of the removed node
    return temp;
}

//Singly removeLast Implementation
int SinglyLinkedList::removeLast() {
    if (!head) {    //Check if list is empty
        cout << "List is empty" << endl;
        return -1;
    }
    if (!head->next) {     //If there's only one node
        int temp = head->element;
        delete head;
        head = nullptr;     //Set head to nullptr as the list is now empty
        return temp;
    }

    node* curr = head;
    node* prev = nullptr;
    while (curr->next) {     //Traverse to the last node
        prev = curr;
        curr = curr->next;
    }
    int temp = curr->element;     //Store the last node's element
    delete curr;     //Free the memory of the last node
    prev->next = nullptr;     //Update the previous node's next to nullptr
    return temp;
}

//Singly print Implementation
void SinglyLinkedList::print() {
    if (!head) {    //Check if list is empty
        cout << "List is empty" << endl;
        return;
    }
    node* curr = head;
    while (curr) {
        if (curr->next == nullptr) {     //Check if it's the last node
            cout << curr->element << endl;
            return;
        }
        cout << curr->element << " -> ";     //Print node followed by '->'
        curr = curr->next;
    }
    cout << endl;
}