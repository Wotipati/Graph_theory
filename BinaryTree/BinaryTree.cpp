//
// Created by Seita Kayukawa on 2018/01/28.
//

#include "BinaryTree.h"


BinaryTree::BinaryTree(){
    root_ = nullptr;
}


BinaryTree::~BinaryTree(){
    clearTree();
}


void BinaryTree::insertNode(int value){
    if(root_ != nullptr){
        insertNode(value, root_);
    }else{
        root_ = createNode(value, nullptr);
    }
}


bool BinaryTree::deleteNode(int value){
    Node *deletingNode = searchNode(value);
    if(deletingNode == nullptr){
        return false;
    }

    if(deletingNode->left_ == nullptr || deletingNode->right_ == nullptr){
        if(deletingNode->left_ == nullptr){
            if(deletingNode->parent_ == nullptr){
                root_ = deletingNode->right_;
            }
            else if(deletingNode->value_ < deletingNode->parent_->value_){
                deletingNode->parent_->left_ = deletingNode->right_;
            }else{
                deletingNode->parent_->right_ = deletingNode->right_;
            }
        }else{
            if(deletingNode->parent_ == nullptr){
                root_ = deletingNode->left_;
            }
            else if(deletingNode->value_ < deletingNode->parent_->value_){
                deletingNode->parent_->left_ = deletingNode->left_;
            }else{
                deletingNode->parent_->right_ = deletingNode->left_;
            }
        }
        delete deletingNode;
    }else{
        Node *biggestNode = searchBiggestNode(deletingNode->left_);
        if(deletingNode->left_->value_ == biggestNode->value_){
            deletingNode->value_ = biggestNode->value_;
            deletingNode->left_ = biggestNode->left_;
        }else{
            deletingNode->value_ = biggestNode->value_;
            biggestNode->parent_->right_ = nullptr;
        }
        delete biggestNode;
    }
}


Node *BinaryTree::searchNode(int value) const{
    return searchNode(value, root_);
}


void BinaryTree::setupTree(int num){
    std::random_device rnd;
    std::mt19937 mt(rnd());
    std::uniform_int_distribution<> rand100(0,99);
    for(int i=0; i<num; i++){
        insertNode(rand100(mt));
    }
}


void BinaryTree::displayTree() const{
    displayTree(0, root_);
}


void BinaryTree::clearTree(){
    clearTree(root_);
}


void BinaryTree::insertNode(int value, Node *leaf){
    if(leaf->value_ > value){
        if(leaf->left_ != nullptr){
            insertNode(value, leaf->left_);
        }else{
            leaf->left_ = createNode(value, leaf);
        }
    }else{
        if(leaf->right_ != nullptr){
            insertNode(value, leaf->right_);
        }else{
            leaf->right_ = createNode(value, leaf);
        }
    }
}


Node *BinaryTree::createNode(int value, Node *parent){
    Node* newNode;
    newNode = new Node;
    newNode->value_ = value;
    newNode->left_ = nullptr;
    newNode->right_ = nullptr;
    newNode->parent_ = parent;
    return newNode;
}


Node *BinaryTree::searchNode(int value, Node *leaf) const{
    if(leaf != nullptr){
        if(value == leaf->value_){
            return leaf;
        }
        if(leaf->value_ > value){
            return searchNode(value, leaf->left_);
        }else{
            return searchNode(value, leaf->right_);
        }
    }
    else{
        return nullptr;
    }
}


Node *BinaryTree::searchBiggestNode(Node *root) const{
    Node *nodeSearcher = root;
    while(nodeSearcher->right_ != nullptr){
        nodeSearcher = nodeSearcher->right_;
    }
    return nodeSearcher;
}


void BinaryTree::displayTree(int depth, Node *leaf) const{
    if (leaf == nullptr) {
        return;
    }
    displayTree(depth+1, leaf->left_);
    for(int i=0; i<depth; i++){
        std::cout << "    ";
    }
    std::cout << leaf->value_ << std::endl;
    displayTree(depth+1, leaf->right_);
}


void BinaryTree::clearTree(Node *leaf){
    if(leaf!= nullptr){
        clearTree(leaf->left_);
        clearTree(leaf->right_);
        delete leaf;
    }
}