//
//  My_stack.hpp
//  tp_lab_2
//
//  Created by Андрей Осадченко on 21.04.2022.
//


#pragma once
#include <iostream>
class Mystack{
private:
    struct comp{
        int value;
        comp *next;
    };
    comp *top = NULL;
    
public:
    void push(int size);
    void print();
    bool operator ==(const Mystack & other);
    bool operator !=(const Mystack & other);
    bool operator >(const Mystack & other);
    bool operator <(const Mystack & other);
    bool operator <=(const Mystack & other);
    bool operator >=(const Mystack & other);
    int size_stack;
};

