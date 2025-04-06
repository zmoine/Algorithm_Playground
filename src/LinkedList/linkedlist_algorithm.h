#pragma once

//Abstract base class for linkedlist algorithms
class LinkedListAlgorithm {
    public:
        virtual void addFirst(int element) = 0;     //Add node to front method
        virtual void addLast(int element) = 0;      //Add node to back method
        virtual int removeFirst() = 0;              //Remove first node method
        virtual int removeLast() = 0;               //Remove last node method
        virtual void print() = 0;                   //Print the list method
        virtual ~LinkedListAlgorithm() = default;   //Virtual destructor for cleanup
};
