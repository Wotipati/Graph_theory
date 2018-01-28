//
// Created by Seita Kayukawa on 2018/01/28.
//

#include "BinaryTree.h"


BinaryTree::BinaryTree(){
    root_ = nullptr;
}

BinaryTree::~BinaryTree(){
    clearTree(root_);
}


void BinaryTree::clearTree(){
    clearTree(root_);
}




void BinaryTree::insertNode(int value, ){
    if(treeRoot_ == nullptr){
        treeRoot_ = createNode(value);
        return;
    }

    if(value_ > value){
        if(left_ != nullptr){
            left_->insertNode(value);
        }else{
            left_ = createNode(value);
        }
    }else{
        if(right_ != nullptr){
            right_->insertNode(value);
        }else{
            right_ = createNode(value);
        }
    }

    return;
}


void BinaryTree::displayTree(int depth){
    if (left_ == nullptr) {
        if (right_ == nullptr) {
            return;
        }
    }

    left_->displayTree(depth+1);

    for(int i=0; i<depth; i++){
        std::cout << "  ";
    }
    std::cout << value_ << std::endl;
    right_->displayTree(depth+1);
}


void BinaryTree::clearTree(Node *leaf){
    if(leaf!= nullptr){
        clearTree(leaf->left_);
        clearTree(leaf->right_);
        delete leaf;
    }
}


