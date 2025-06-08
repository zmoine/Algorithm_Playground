#pragma once

#include "../linkedlistalgorithm.h"
#include "node.h"

//DoublyLinkedList class inherits from LinkedListAlgorithm abstract class
class DoublyLinkedList : LinkedListAlgorithm {
    node* head;
    node* tail;
public:
    DoublyLinkedList();                                                //Constructor
    void addFirst(int element) override;                               //Implements addFirst method
    void addLast(int element) override;                                //Implements addLast method
    int removeFirst() override;                                        //Implements removeFirst method
    int removeLast() override;                                         //Implements removeLast method
    void print() override;                                             //Implements print method
private:
    static void addBetween(node* succ, node* pred, int element);     //Implements addBetween method
    static int removeBetween(node* succ, node* pred, node* n);       //Implements removeBetween method
};