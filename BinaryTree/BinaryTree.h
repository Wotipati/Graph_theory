//
// Created by Seita Kayukawa on 2018/01/28.
//

#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

#include <iostream>
#include <random>
#include <stdio.h>

struct Node{
    int value_;
    Node *left_;
    Node *right_;
    Node *parent_;
};


class BinaryTree{
public:
    BinaryTree();
    ~BinaryTree();

    void insertNode(int value);
    bool deleteNode(int value);
    Node *searchNode(int value);
    void setupTree(int num);
    void displayTree();
    void clearTree();

private:
    Node *root_;

    void insertNode(int value, Node *leaf);
    Node *createNode(int value, Node *parent);
    Node *searchNode(int value, Node *leaf);
    Node *searchBiggestNode(Node *root);
    void displayTree(int depth, Node *leaf);
    void clearTree(Node *leaf);
};




#endif //BINARYTREE_BINARYTREE_H
