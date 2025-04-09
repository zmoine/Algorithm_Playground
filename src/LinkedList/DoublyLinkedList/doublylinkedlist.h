#pragma once

#include "../linkedlistalgorithm.h"
#include "node.h"

//DoublyLinkedList class inherits from LinkedListAlgorithm abstract class
class DoublyLinkedList : LinkedListAlgorithm {
    node* head;
    node* tail;
public:
    DoublyLinkedList();                                       //Constructor
    void addBetween(node* succ, node* pred, int element);     //Implements addBetween method
    int removeBetween(node* succ, node* pred, node* n);       //Implements removeBetween method
    void addFirst(int element);                               //Implements addFirst method
    void addLast(int element);                                //Implements addLast method
    int removeFirst();                                        //Implements removeFirst method
    int removeLast();                                         //Implements removeLast method
    void print();                                             //Implements print method
};