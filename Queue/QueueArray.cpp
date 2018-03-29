//
// Created by Seita Kayukawa on 2018/01/27.
//

#include "QueueArray.h"

QueueArray::QueueArray() {

};

void QueueArray::enqueue(int data){
    if((end_+1)%queueLength_ == start_){
        std::cout << "FULL!!! " << std::endl;
    }else{
        queue_[end_] = data;
        end_ = (end_+1) % queueLength_;
    }
}


int QueueArray::dequeue() {
    if (start_ == end_){
        std::cout << "EMPTY ";
        exit(1);
    }else{
        int first = queue_[start_];
        queue_[start_] = 0;
        start_  = (start_+1) % queueLength_;
        return first;
    }
}


void QueueArray::printQueue() const{
    for(int qi=0; qi<queueLength_; qi++){
        std::cout << queue_[qi] << ", ";
    }
    std::cout <<std::endl;
}
