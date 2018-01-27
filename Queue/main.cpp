//
//  main.cpp
//  Stack
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include <iostream>
#include "QueueArray.h"
#include "QueueList.h"

void queueArrayExample(QueueArray queArray);
void queueListExample(QueueList queList);


int main(int argc, const char * argv[]) {
    QueueArray queArray;
    queueArrayExample(queArray);

//    QueueList queList;
//    queueListExample(queList);
    return 0;
}


void queueArrayExample(QueueArray queue){
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    std::cout << "You add  1 & 2 & 3 / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(4);
    queue.enqueue(5);
    std::cout << "You add  4 & 5     / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(6);
    std::cout << "You add  6         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(7);
    std::cout << "You add  7         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();
}


void queueListExample(QueueList queue){
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    std::cout << "You add  1 & 2 & 3 / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(4);
    queue.enqueue(5);
    std::cout << "You add  4 & 5     / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(6);
    std::cout << "You add  6         / Now Queue: ";
    queue.printQueue();

    queue.enqueue(7);
    std::cout << "You add  7         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();

    std::cout << "You pull " << queue.dequeue() << "         / Now Queue: ";
    queue.printQueue();
}