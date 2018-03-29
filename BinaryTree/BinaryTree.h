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
    Node *searchNode(int value) const;
    void setupTree(int num);
    void displayTree() const;
    void clearTree();

private:
    Node *root_;

    void insertNode(int value, Node *leaf);
    Node *createNode(int value, Node *parent);
    Node *searchNode(int value, Node *leaf) const;
    Node *searchBiggestNode(Node *root) const;
    void displayTree(int depth, Node *leaf) const;
    void clearTree(Node *leaf);
};




#endif //BINARYTREE_BINARYTREE_H
