//
// Created by Ethan Sawyer on 7/5/20.
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *leftChild;
    struct Node *rightChild;
};

struct Node *new_Node(int value) {
    struct Node *this = (struct Node *) malloc(sizeof(struct Node));
    if (this == NULL) {
        return NULL; // Out of memory...
    }
    this->value = value;
    this->leftChild = NULL;
    this->rightChild = NULL;
    return this;
}

void Node_print(struct Node *this) {
    printf("Node[%d]", this->value);
}

/*
 *  The four cases are:
 *
 *  The tree is empty, so the new element will be at the root of the tree.
 *  The element is already in the tree, so there’s nothing to do.
 *  The element is not already in the tree, meaning it belongs in either the
 *  left or the right subtree of the tree, depending on its value.
 */
struct Node *Node_add(struct Node *this, int value) {
    if (this == NULL) {
        this = new_Node(value);
    } else if (value < this->value) {
        this->leftChild = Node_add(this->leftChild, value);
    } else if (value > this->value) {
        this->rightChild = Node_add(this->rightChild, value);
    } else {
        // Already in tree
    }
    return this;
}

struct Tree {
    struct Node *root;
};

struct Tree *new_Tree() {
    struct Tree *this = (struct Tree *) malloc(sizeof(struct Tree));
    if (this == NULL) {
        return NULL; // Out of memory...
    }
    this->root = NULL;
    return this;
}

void Tree_add(struct Tree *this, int value) {
    this->root = Node_add(this->root, value);
}

void Tree_print(struct Tree *this) {
    Node_print(this->root);
}

//int main(int argc, char *argv[]) {
//    struct Node* root = NULL;
//    root = Node_add(root, 20);
//    root = Node_add(root, 10);
//    root = Node_add(root, 5);
//    root = Node_add(root, 15);
//    root = Node_add(root, 30);
//    root = Node_add(root, 40);
//    root = Node_add(root, 20);
//    Node_print(root);
//}