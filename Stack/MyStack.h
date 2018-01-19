//
//  MyStack.h
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#ifndef MyStack_h
#define MyStack_h

#include <stdio.h>
#include <iostream>

class MyStack{
public:
    MyStack();
    ~MyStack();
    bool pushBack(double newData);
    double popBack();
    void display();
    int length();

private:
    struct Node{
        Node *prev_;
        Node *next_;
        double data_;
    };

    Node *beginNode_;
    Node *endNode_;
    int listLength_;
};


#endif /* MyStack_h */
