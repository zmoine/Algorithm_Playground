#pragma once

enum Color { RED = 0, BLACK = 1};

struct node{
    int elem;
    node* parent;
    node* left;
    node* right;

    node() {
        elem = 0;
        parent = this;
        left = this;
        right = this;
    }

    node(int num) {
        elem = num;
        parent = nullptr;
        left = nullptr;
        right = nullptr;
    }
};