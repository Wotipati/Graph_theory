//
// Created by Seita Kayukawa on 2018/01/27.
//

#ifndef QUEUE_QUEUELIST_H
#define QUEUE_QUEUELIST_H

#include "MyList.h"

class QueueList{
public:
    QueueList();
    void enqueue(int data);
    int dequeue();
    void printQueue();

private:
    MyList queueList_;
};

QueueList::QueueList(){

}

void QueueList::enqueue(int data){
    queueList_.pushBackNode(data);
}


int QueueList::dequeue(){
    if(queueList_.getLength() == 0){
        std::cout << "Empty" << std::endl;
        exit(1);
    }
    int ret = queueList_.getData(1);
    queueList_.deleteNode(1);
    return ret;
}

void QueueList::printQueue(){
    queueList_.display();
}
#endif //QUEUE_QUEUELIST_H
