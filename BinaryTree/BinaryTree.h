//
// Created by Seita Kayukawa on 2018/01/28.
//

#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

#include <opencl-c.h>
#include <iostream>
#include <stdio.h>

struct Node{
    int value;
    Node *left_;
    Node * raight_;
};


class BinaryTree{
public:
    BinaryTree();
    ~BinaryTree();
    void clearTree();

    void insertNode(int value, Node *leaf);
    void displayTree(int depth);

private:
    Node *root_;

    void clearTree(Node *leaf);
};




#endif //BINARYTREE_BINARYTREE_H
