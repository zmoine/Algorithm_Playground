#include "doublylinkedlist.h"
#include <iostream>
using namespace std;

int main() {
    //Create instance of DoublyLinkedList
    DoublyLinkedList list;

    //Example
    list.addFirst(6);           //Add 6 to the front
    list.addFirst(4);           //Add 4 to the front
    list.addLast(8);            //Add 8 to the back
    list.addFirst(2);           //Add 2 to the front
    list.addLast(10);           //Add 10 to the back
    list.print();               //Print list from head: 2 -> 4 -> 6 -> 8 -> 10, from tail: 10 -> 8 -> 6 -> 4 -> 2

    cout << "Removed: " << list.removeLast() << endl;       //Remove last node(10)
    list.print();                                           //Print list from head: 2 -> 4 -> 6 -> 8, from tail: 8 -> 6 -> 4 -> 2

    cout << "Removed: " << list.removeFirst() << endl;      //Remove first node(2)
    list.print();                                           //Print list from head: 4 -> 6 -> 8, from tail: 8 -> 6 -> 4

    cout << "Removed: " << list.removeFirst() << endl;      //Remove first node(4)
    cout << "Removed: " << list.removeLast() << endl;       //Remove first node(8)
    cout << "Removed: " << list.removeFirst() << endl;      //Remove first node(6)
    list.print();                                           //Print list "List is empty"

    cout << "Removed: " << list.removeFirst() << endl;      //"List is empty", "-1"

    return 0;
}