//
//  main.cpp
//  Stack
//
//  Created by Seita Kayukawa on 2018/01/16.
//  Copyright © 2018年 Seita Kayukawa. All rights reserved.
//

#include <iostream>
//#include <string>
#include "MyStack.h"


int main(int argc, const char * argv[]) {
    MyStack myStack;
    std::string newData;
    double data1, data2;
    std::cout << ">>";
    std::cin >> newData;
    myStack.pushBack(std::stod(newData));

    bool isCalculating = true;
    while(isCalculating){
        myStack.display();
        std::cout << ">>";
        std::cin >> newData;
        if(newData == "+") {
            data1 = myStack.popBack();
            data2 = myStack.popBack();
            myStack.pushBack(data1 + data2);
        }
        else if(newData == "-") {
            data1 = myStack.popBack();
            data2 = myStack.popBack();
            myStack.pushBack(data2 - data1);
        }
        else if(newData == "*"){
            data1 = myStack.popBack();
            data2 = myStack.popBack();
            myStack.pushBack(data1*data2);
        }
        else if(newData == "/"){
            data1 = myStack.popBack();
            data2 = myStack.popBack();
            myStack.pushBack(data2/data1);
        }
        else if(newData == "=") {
            isCalculating = false;
        }
        else{
            myStack.pushBack(std::stoi(newData));
        }
    }

    std::cout << "result = " << myStack.popBack() << std::endl;
    if(myStack.length()>1){
        std::cout << "Data still remains in the stack" << std::endl;
        myStack.display();
    }

    return 0;
}
