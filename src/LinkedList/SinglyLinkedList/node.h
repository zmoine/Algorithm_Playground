#pragma once

//Struct for the node
struct node {
    int element;
    node* next;

    //Constructor
    node(int element) {
        this->element = element;
        next = nullptr;
    }
};

