#include <iostream>
#include <random>
#include "BinaryTree.h"

int main() {
    BinaryTree mainTree;

    mainTree.setupTree(7);

    for(;;){
        mainTree.displayTree();
        std::cout << "Please enter the next operation." << std::endl;
        std::cout << "1: Add, 2: Delete, 0: Finish ";
        int operating, num;
        std::cin >> operating;
        if(operating == 1){
            std::cout << "Please enter the number that you want to add: ";
            std::cin >> num;
            mainTree.insertNode(num);
        }
        else if(operating == 2){
            std::cout << "Please enter the number that you want to delete: ";
            std::cin >> num;
            mainTree.deleteNode(num);
        }else{
            break;
        }
    }
    mainTree.clearTree();
    return 0;
}