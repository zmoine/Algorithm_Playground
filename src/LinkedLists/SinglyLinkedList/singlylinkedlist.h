#pragma once

#include "../linkedlist.h"
#include "node.h"

//SinglyLinkedList class inherits from LinkedListAlgorithm abstract class
class SinglyLinkedList : public LinkedListAlgorithm{
    node* head;
public:
    SinglyLinkedList();                      //Constructor
    void addFirst(int element) override;     //Implements addFirst method
    void addLast(int element) override;      //Implements addLast method
    int removeFirst() override;              //Implements removeFirst method
    int removeLast() override;               //Implements removeLast method
    void print() override;                   //Implements print method
};

