//
//  MyList.cpp
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include "MyList.h"

MyList::MyList(){
    beginNode_ = NULL;
    endNode_ = NULL;
    listLength_ = 0;
}


void MyList::replaceNode(int newdata_, int index){
    if(abs(index)>listLength_ || index==0){
        std::cout << "ERROR: out of range" << std::endl;
        exit(1);
    }

    if(index>0){
        MyList *nodeSearcher = beginNode_;
        for(int i=0; i<index-1; i++){
            nodeSearcher = nodeSearcher->next_;
        }
        nodeSearcher->data_ = newdata_;
    }
    else{
        MyList *nodeSearcher = endNode_;
        for(int i=0; i<index-1; i++){
            nodeSearcher = nodeSearcher->prev_;
        }
        nodeSearcher->data_ = newdata_;
    }
}


void MyList::pushBackNode(int newdata_){
    MyList *newNode;
    newNode = new MyList;
    newNode->data_ = newdata_;
    newNode->next_ = NULL;

    MyList *nodeSearcher;
    if(!beginNode_){
        newNode->prev_ = NULL;
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
}


void MyList::insertNode(int newdata_, int index){
    if(abs(index)>listLength_+1 || index == 0){
        std::cout << "ERROR: out of range" << std::endl;
        exit(1);
    }

    MyList *newNode;
    newNode = new MyList;
    newNode->data_ = newdata_;

    if(index == -1 || index == listLength_+1){
        pushBackNode(newdata_);
    }
    else if(index == 1 || index == -(listLength_+1)){
        newNode->prev_ = NULL;
        newNode->next_ = beginNode_;
        beginNode_->prev_ = newNode;
        beginNode_ = newNode;
        listLength_ += 1;
    }
    else if(index>1){
        MyList *nodeSearcher = beginNode_;
        for(int i=1; i<index; i++){
            nodeSearcher = nodeSearcher->next_;
        }
        MyList *nodeSearcherPrev = nodeSearcher->prev_;
        newNode->next_ = nodeSearcher;
        newNode->prev_ = nodeSearcherPrev;
        nodeSearcherPrev->next_ = newNode;
        nodeSearcher->prev_ = newNode;
        listLength_ += 1;
    }else{
        MyList *nodeSearcher = endNode_;
        for(int i=-1; i>index; i--){
            nodeSearcher = nodeSearcher->prev_;
        }
        MyList *nodeSearcherNext = nodeSearcher->next_;
        newNode->next_ = nodeSearcherNext;
        newNode->prev_ = nodeSearcher;
        nodeSearcher->next_ = newNode;
        nodeSearcherNext->prev_ = newNode;
        listLength_ += 1;
    }
}


void MyList::display(){
    MyList *nodeSearcher = beginNode_;
    while(nodeSearcher->next_){
        std::cout << nodeSearcher->data_ << ", ";
        nodeSearcher = nodeSearcher->next_;
    }
    std::cout << nodeSearcher->data_ << std::endl;
}


void MyList::popBackNode(){
    endNode_ = endNode_->prev_;
    delete endNode_->next_;
    endNode_->next_ = NULL;
    listLength_ -= 1;
}


void MyList::deleteNode(int index){
    if(abs(index)>listLength_ || index==0){
        std::cout << "ERROR: out of range" << std::endl;
        exit(1);
    }

    if(index == 1 || index == -1*listLength_){
        beginNode_ = beginNode_->next_;
        delete beginNode_->prev_;
        beginNode_->prev_ = NULL;
        listLength_ -= 1;
    }
    else if(index == -1 || index == listLength_){
        popBackNode();
    }
    else if(index>1){
        MyList *nodeSearcher = beginNode_;
        for(int i=1; i<index-1; i++){
            nodeSearcher = nodeSearcher->next_;
        }
        MyList *deletingNode = nodeSearcher->next_;
        nodeSearcher->next_ = deletingNode->next_;
        nodeSearcher->next_->prev_ = nodeSearcher;
        listLength_ -= 1;
        delete deletingNode;
    }
    else{
        MyList *nodeSearcher = endNode_;
        for(int i=-1; i>index+1; i--){
            nodeSearcher = nodeSearcher->prev_;
        }
        MyList *deletingNode = nodeSearcher->prev_;
        nodeSearcher->prev_ = deletingNode->prev_;
        nodeSearcher->prev_->next_ = nodeSearcher;
        listLength_ -= 1;
        delete deletingNode;
    }
}


MyList::~MyList(){
    MyList *nodeSearcher = beginNode_;
    MyList *next_Node;
    while(nodeSearcher!=NULL){
        next_Node = nodeSearcher->next_;
        delete nodeSearcher;
        nodeSearcher = next_Node;
    }
}
