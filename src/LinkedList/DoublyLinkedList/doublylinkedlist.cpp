#include "doublylinkedlist.h"
#include "node.h"
#include <iostream>
using namespace std;

//Constructor Implementation
DoublyLinkedList::DoublyLinkedList() {
    head = new node(0);     //Initializes list with a head sentinel
    tail = new node(0);     //Initializes list with a tail sentinel
    head->next = tail;      //Connect head to tail
    tail->prev = head;      //Connect tail back to head
}

//Internal Insert Between Nodes Implementation
void DoublyLinkedList::addBetween(node* succ, node* pred, int element) {
    node* newNode = new node(element);
    succ->prev = newNode;      //Link successor to new node
    pred->next = newNode;      //Link predecessor to new node
    newNode->next = succ;      //Link new node to successor
    newNode->prev = pred;      //Link new node to predecessor
}

//Internal Removal Between Nodes Implementation
int DoublyLinkedList::removeBetween(node* succ, node* pred, node* n) {
    int element = n->element;      //Store element to return
    succ->prev = pred;             //Bypass node on the right
    pred->next = succ;             //Bypass node on the left
    delete n;                      //Delete the node
    return element;
}

//Doubly addFirst Using addBetween Helper Function
void DoublyLinkedList::addFirst(int element) {
    addBetween(head->next, head, element);
}

//Doubly addLast Using addBetween Helper Function
void DoublyLinkedList::addLast(int element) {
    addBetween(tail, tail->prev, element);
}

//Doubly removeFirst Using removeBetween Helper Function
int DoublyLinkedList::removeFirst() {
    if (head->next == tail) {     //Check if list is empty
        cout << "List is empty" << endl;
        return -1;
    }
    return removeBetween(head->next->next, head, head->next);
}

//Doubly removeLast Using removeBetween Helper Function
int DoublyLinkedList::removeLast() {
    if (tail->prev == head) {     //Check if list is empty
        cout << "List is empty" << endl;
        return -1;
    }
    return removeBetween(tail, tail->prev->prev, tail->prev);
}

//Doubly print Implementation
void DoublyLinkedList::print() {
    if (head->next == tail|| tail->prev == head) {     //Check if list is empty
        cout << "List is empty" << endl;
        return;
    }
    cout << "From head: ";      //Printing from head
    node* curr = head->next;
    while (curr != tail) {
        cout << curr->element;
        if (curr->next != tail) cout << " -> ";    //Check if it's not the last node
        curr = curr->next;
    }
    cout << endl;
    cout << "From tail: ";      //Printing from tail
    curr = tail->prev;
    while (curr != head) {
        cout << curr->element;
        if (curr->prev != head) cout << " <- ";    //Check if it's not the last node
        curr = curr->prev;
    }
    cout << endl;
}
