#pragma once

#include "../linkedlistalgorithm.h"
#include "node.h"

//SinglyLinkedList class inherits from LinkedListAlgorithm abstract class
class SinglyLinkedList : public LinkedListAlgorithm{
    node* head;
public:
    SinglyLinkedList();             //Constructor
    void addFirst(int element);     //Implements addFirst method
    void addLast(int element);      //Implements addLast method
    int removeFirst();              //Implements removeFirst method
    int removeLast();               //Implements removeLast method
    void print();                   //Implements print method
};

