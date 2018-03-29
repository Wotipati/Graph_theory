//
//  MyStack.cpp
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include "MyStack.h"

MyStack::MyStack(){
    beginNode_ = nullptr;
    endNode_ = nullptr;
    listLength_ = 0;
}


bool MyStack::pushBack(double newData_){
    Node *newNode;
    newNode = new Node;
    newNode->data_ = newData_;
    newNode->next_ = nullptr;

    Node *nodeSearcher;
    if(!beginNode_ || listLength_ == 0){
        newNode->prev_ = nullptr;
        beginNode_ = newNode;
        endNode_ = newNode;
    }
    else{
        nodeSearcher = beginNode_;
        while(nodeSearcher->next_){
            nodeSearcher = nodeSearcher->next_;
        }
        nodeSearcher->next_ = newNode;
        newNode->prev_ = nodeSearcher;
        endNode_ = newNode;
    }
    listLength_ += 1;
    return true;
}


double MyStack::popBack(){
    if(listLength_ <= 0){
        std::cout << "ERROR: stack underflow" <<std::endl;
        exit(1);
    }
    if(listLength_ == 1){
        listLength_ = 0;
        return endNode_->data_;
    }

    double topData = endNode_->data_;
    endNode_ = endNode_->prev_;
    delete endNode_->next_;
    endNode_->next_ = nullptr;
    listLength_ -= 1;
    return topData;
}


void MyStack::display() const{
    std::cout << "now stack: ";
    Node *nodeSearcher = beginNode_;
    while(nodeSearcher->next_){
        std::cout << nodeSearcher->data_ << ", ";
        nodeSearcher = nodeSearcher->next_;
    }
    std::cout << nodeSearcher->data_ << std::endl;
}



MyStack::~MyStack(){
    Node *nodeSearcher = beginNode_;
    Node *next_Node;
    while(nodeSearcher!= nullptr){
        next_Node = nodeSearcher->next_;
        delete nodeSearcher;
        nodeSearcher = next_Node;
    }
}
