//
//  Main.cpp
//  NodeC++
//
//  Created by Noah VanSickle on 4/17/18.
//  Copyright © 2018 Noah VanSickle. All rights reserved.
//

#include <stdio.h>
#include "LinkedList.hpp"
#include "Node.hpp"
#include <iostream>
#include <string>

int main(){
Node a("hi", NULL), b("hi", NULL), c("hi", NULL);

    a.set_data("bananas");
    b.set_data("Apples");
    c.set_data("strawberries");
    
    LinkedList list;
    
    list.add("bananas");
    list.add("apples");
    list.add("strawberries");
    
    std::string j = list.remove();
    std::string k = list.remove();
    std::string l = list.remove();
    
    std::cout << j << "\n";
    std::cout << k << "\n";
    std::cout << l << "\n";
    
    
    
    
    
}


