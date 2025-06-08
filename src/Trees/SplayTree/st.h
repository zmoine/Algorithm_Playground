#pragma once

#include "node.h"
#include <iostream>
using namespace std;


class SplayTree {
    node* root;
    int size;

    node* create_node(int num, node* parent) {
        node* n = new node(num);
        n->parent = parent;
        return n;
    }

    bool search(node* curr, int num) {
        if (curr == nullptr) return false;
        node* n = search_node(root, num);
        restructure(n);
        return root->elem == num;
    }

    node* search_node(node* curr, int num){
        while (curr->elem != num) {
            if (num < curr->elem) {
                if (curr->left == nullptr) break;
                curr = curr->left;
            } else {
                if (curr->right == nullptr) break;
                curr = curr->right;
            }
        }
        return curr;
    }

    void zigleft(node* x) {
        node* y = x->parent;
        if (!y) return;

        node* g = y->parent;

        y->right = x->left;
        if (x->left) x->left->parent = y;

        x->left = y;
        y->parent = x;

        x->parent = g;
        if (g) {
            if (g->left == y) g->left = x;
            else g->right = x;
        }
        if(!x->parent) root=x;
    }


    void zigright(node* x) {
        node* y = x->parent;
        if (!y) return;

        node* g = y->parent;

        y->left = x->right;
        if (x->right) x->right->parent = y;

        x->right = y;
        y->parent = x;

        x->parent = g;
        if (g) {
            if (g->left == y) g->left = x;
            else g->right = x;
        }
        if(!x->parent) root=x;
    }

    void restructure(node* child) {
        if(!child) return;
        while(child->parent){
            node* p = child->parent;
            node* g = p->parent;

            if(!g){
                if(child == p->left){
                    cout << "ZIGRIGHT" << endl;
                    zigright(child);
                }else{
                    cout << "ZIGLEFT" << endl;
                    zigleft(child);
                }
                break;
            }else{
                if(p == g->left){
                    if(child == p->left){
                        cout << "ZIGZIGRIGHT" << endl;
                        zigright(p);
                        zigright(child);
                    }else{
                        cout << "ZIGZAGRIGHT" << endl;
                        zigleft(child);
                        zigright(child);
                    }
                }else{
                    if(child == p->right){
                        cout << "ZIGZIGLEFT" << endl;
                        zigleft(p);
                        zigleft(child);
                    }else{
                        cout << "ZIGZAGLEFT" << endl;
                        zigright(child);
                        zigleft(child);
                    }
                }
            }
        }
    }


public:
    SplayTree(){
        root = nullptr;
        size = 0;
    }

    bool search(int num){
        if (!root){ return false;}
        node* n = search_node(root, num);
        restructure(n);
        return root->elem == num;
    }

    bool insert(int num) {
        if(root == nullptr){
            root = create_node(num, nullptr);
            size++;
            return true;
        }else{
            node* parent = search_node(root, num);
            if(parent->elem!=num){
                node* newNode = create_node(num, parent);
                if(parent->elem < num){
                    parent->right = newNode;
                }else{
                    parent->left = newNode;
                }
                restructure(newNode);
                size++;
                return true;
            }
            restructure(parent);
            return false;
        }
    }


    node* findMin(node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    bool remove(int key) {
        if (!root) return false;

        node* current = search_node(root, key);
        restructure(current);

        if (current->elem != key) return false;

        //Now delete the root
        if (!root->left) {
            //Case 2: No left child -> promote right
            node* newRoot = root->right;
            if (newRoot) newRoot->parent = nullptr;
            delete root;
            root = newRoot;
            size--;
            return true;
        } else if (!root->right) {
            //Case 2: No right child → promote left
            node* newRoot = root->left;
            if (newRoot) newRoot->parent = nullptr;
            delete root;
            root = newRoot;
            size--;
            return true;
        } else {
            //Case 3: Both children → splay min of right subtree
            node* left = root->left;
            node* minRight = findMin(root->right);  //New: Find min of right subtree
            restructure(minRight);

            //Reattach left subtree
            root->left = left;
            left->parent = root;
            delete current;
            size--;
            return true;
        }
    }

    void getRoot()  {
        if (root != nullptr) {
            cout << root->elem << endl;
        } else {
            cout << "Tree is empty" << endl;
        }
    }

    bool isEmpty() {
        return size == 0;
    }

    void print() {
        if (isEmpty()) {
            cout << "EMPTY" << endl;
            return;
        }
        cout << "PRE-ORDER: ";
        print_preorder(root);
        cout << endl << "IN-ORDER: ";
        print_inorder(root);
        cout << endl << "POST-ORDER: ";
        print_postorder(root);
        cout << endl;
    }

    void print_preorder(node* curr) {
        if (curr == nullptr) return;
        cout << curr->elem << " ";
        print_preorder(curr->left);
        print_preorder(curr->right);
    }

    void print_inorder(node* curr) {
        if (curr == nullptr) return;
        print_inorder(curr->left);
        cout << curr->elem << " ";
        print_inorder(curr->right);
    }

    void print_postorder(node* curr) {
        if (curr == nullptr) return;
        print_postorder(curr->left);
        print_postorder(curr->right);
        cout << curr->elem << " ";
    }
};