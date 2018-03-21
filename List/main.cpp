//
//  main.cpp
//  List
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include <iostream>
#include "DoublyLinkedList.h"
#include "DoublyLinkedListTemplate.h"


int main(int argc, const char * argv[]) {
    DoublyLinkedList myList1;
    myList1.pushBackNode(0);
    myList1.pushBackNode(5);
    myList1.replaceNode(4, 1);
    myList1.insertNode(2, 1);
    myList1.insertNode(3, 2);
    myList1.insertNode(7, 5);
    myList1.insertNode(8, -1);
    myList1.insertNode(6, -3);
    myList1.insertNode(1, -8);

    DoublyLinkedList myList2;
    myList2 = myList1;
    myList2.pushBackNode(5);

    DoublyLinkedList myList3 = myList2;
    myList3 = myList1;

    std::cout << "   mylist1   ";
    myList1.display();
    std::cout << "   mylist2   ";
    myList2.display();
    std::cout << "   mylist3   ";
    myList3.display();

    myList1.popBackNode();
    myList1.deleteNode(2);
    myList1.deleteNode(6);
    myList1.deleteNode(-1);
    myList1.deleteNode(-2);
    myList1.deleteNode(-3);
    myList1.popBackNode();
    myList1.popBackNode();
    myList1.pushBackNode(2);

    std::cout << "   mylist1   ";
    myList1.display();

    DoublyLinkedListTemp<double> myListTemp;
    myListTemp.pushBackNode(0.5);
    std::cout << "myListTemp   ";
    myListTemp.display();
    return 0;
}
