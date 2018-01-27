//
//  main.cpp
//  Stack
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include <iostream>
#include "QueueArray.h"

void queArrayExample(QueueArray queArray);


int main(int argc, const char * argv[]) {
    QueueArray queArray;
    queArrayExample(queArray);
    return 0;
}


void queArrayExample(QueueArray queArray){
    queArray.enqueue(1);
    queArray.enqueue(2);
    queArray.enqueue(3);
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.enqueue(4);
    queArray.enqueue(5);
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.enqueue(6);
    queArray.printQueue();
    queArray.enqueue(7);
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.printQueue();
    std::cout << "You get '" << queArray.dequeue() << "'." <<std::endl;
    queArray.printQueue();
}

