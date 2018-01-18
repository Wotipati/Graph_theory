//
//  main.cpp
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include <iostream>
#include "MyList.h"


int main(int argc, const char * argv[]) {
    MyList myList;
    myList.pushbackNode(0);
    myList.display();
    myList.pushbackNode(5);
    myList.display();
    myList.replaceNode(4, 1);
    myList.display();
    myList.insertNode(2, 1);
    myList.display();
    myList.insertNode(3, 2);
    myList.display();
    myList.insertNode(7, 5);
    myList.display();
    myList.insertNode(8, -1);
    myList.display();
    myList.insertNode(6, -3);
    myList.display();
    myList.insertNode(1, -8);
    myList.display();
    myList.popbackNode();
    myList.display();
    myList.deleteNode(2);
    myList.display();
    myList.deleteNode(6);
    myList.display();
    myList.deleteNode(-1);
    myList.display();
    myList.deleteNode(-2);
    myList.display();
    myList.deleteNode(-3);
    myList.display();
    return 0;
}
