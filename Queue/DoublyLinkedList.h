//
//  DoublyLinkedList.h
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include <stdio.h>
#include <iostream>


class DoublyLinkedList{
public:
    DoublyLinkedList():beginNode_(nullptr),endNode_(nullptr),listLength_(0){}
    ~DoublyLinkedList();
    DoublyLinkedList(const DoublyLinkedList& other);
    DoublyLinkedList &operator=(DoublyLinkedList src);

    bool replaceNode(int newData, int index);
    bool pushBackNode(int newData);
    bool insertNode(int newData, int index);
    bool popBackNode();
    bool deleteNode(int index);
    int  getData(int index) const;
    int  getLength() const{return listLength_;};
    void display() const;

private:
    struct Node{
        Node *prev_;
        Node *next_;
        int data_;
    };

    Node *beginNode_;
    Node *endNode_;
    int listLength_;
};


#endif /* DoublyLinkedList_h */
