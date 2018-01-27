//
// Created by Seita Kayukawa on 2018/01/27.
//

#ifndef QueueArray_h
#define QueueArray_h

#include <stdio.h>
#include <iostream>

class QueueArray{
public:
    QueueArray();
    void enqueue(int data);
    int dequeue();
    void printQueue();

private:
    static const int queueLength_ = 5;
    int queue_[queueLength_] = {};
    int start_ = 0;
    int end_ = 0;

};

#endif //QueueArray_h
