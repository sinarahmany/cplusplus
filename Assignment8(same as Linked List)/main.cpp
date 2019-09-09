//
//  main.cpp
//  Assignment8
//
//  Created by Rajabi Chavari, Hamed on 2019-09-05.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <iomanip>
#include "LinkedList.hpp"
#include "Node.hpp"

void menu();

int main() {
    
    //linked list created
    LinkedList<double> list;
    
    //selection for menu
    //value for node data
    int selection;
    double val;
    
    do {
        
        menu();
        std::cin >> selection;
        
        switch (selection) {
            case 1:
                list.size();
                break;
                
            case 2:
                list.front();
                break;
                
            case 3:
                list.back();
                break;
                
            case 4:
                std::cout << "enter node data ? ";
                std::cin >> val;
                std::cout << "\n";
                list.push_back(val);
                break;
                
            case 5:
                list.pop_back();
                break;
                
            case 6:
                std::cout << "enter node data ? ";
                std::cin >> val;
                std::cout << "\n";
                list.push_front(val);
                break;
                
            case 7:
                list.pop_front();
                break;
                
            case 8:
                list.clear();
                break;
                
            case 9:
                std::cout<< std::boolalpha << list.isEmpty();
                break;
                
            case 10:
                list.printList();
                break;
            case 0:
                break;
        }
        
    } while (selection != 0);
    
    return 0;
}


void menu() {
    std::cout << "\n";
    std::cout << std::left << std::setw(20) << " 1 size of list " << " | ";
    std::cout << std::left << std::setw(20) << " 2 show front node " << " | ";
    std::cout << std::left << std::setw(20) << " 3 show back node " << std::endl;
    std::cout << std::left << std::setw(20) << " 4 push_back " << " | ";
    std::cout << std::left << std::setw(20) << " 5 pop_back " << " | ";
    std::cout << std::left << std::setw(20) << " 6 push_front " << std::endl;
    std::cout << std::left << std::setw(20) << " 7 pop_front " << " | ";
    std::cout << std::left << std::setw(20) << " 8 clean the list " << " | ";
    std::cout << std::left << std::setw(20) << " 9 is list empty " << std::endl;
    std::cout << std::left << std::setw(20) << " 10 printList " << " | ";
    std::cout << std::left << std::setw(20) << " 0 exit " ;
    std::cout << "\n------your selection? ";
    
}

