#include <iostream>
#include "singly_linkedlist.h"
using namespace std;

int main() {
    //Create instance of SinglyLinkedList
    SinglyLinkedList list;

    //Example
    list.addFirst(10);           //Add 10 to the front
    list.addFirst(5);            //Add 5 to the front
    list.addLast(20);            //Add 20 to the back
    list.addFirst(0);            //Add 0 to the front
    list.print();                //Print list  0 -> 5 -> 10 -> 20

    list.removeFirst();          //Remove first node(0)
    list.print();                //Print list 5 -> 10 -> 20

    list.removeLast();           //Remove last node(20)
    list.print();                //Print list 5 -> 10

    return 0;
}