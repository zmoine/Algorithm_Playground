#pragma once

//Struct for the node
struct node {
    int element;
    node* next;
    node* prev;

    //Constructor 1
    node(int element) {
        this->element = element;
    }

    //Constructor 2
    node(node* next, node* prev, int element) {
        this->next = next;
        this->prev = prev;
        this->element = element;
    }
};