//
//  OrderedList.hpp
//  Project2
//
//  Created by Michael Kelnar on 11/5/20.
//  Copyright © 2020 Michael Kelnar. All rights reserved.
//

#ifndef OrderedList_hpp
#define OrderedList_hpp

#include <stdio.h>
#include "Node.h"


class OrderedList
{
public:
    OrderedList();
    void insert(Node n);
    Node remove(Node n);
    Node removeFront();
    void clear();
    void absorb(OrderedList);
    void printOrderedList();
    ~OrderedList();
    bool isEmpty();
private:
    int* firstNodePtr;
};




#endif /* OrderedList_hpp */
