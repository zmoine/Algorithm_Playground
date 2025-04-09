#pragma once

//Struct for the node
struct node {
    int element;
    node* next ;
    node* prev;

    node(int element) {
        this->element = element;
        next = nullptr;
        prev = nullptr;
    }
};