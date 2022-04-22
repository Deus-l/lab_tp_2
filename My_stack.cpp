//
//  My_stack.cpp
//  tp_lab_2
//
//  Created by Андрей Осадченко on 21.04.2022.
//

#include "My_stack.hpp"
#include <random>
using namespace std;

void Mystack::push(int size){
    size_stack = size;
    comp *elem;
    elem = new comp();
    
    elem->value = rand()%20;
    top = elem;
   
    
    for(int i = 0; i < size - 1; i++){
        comp *elem;
        elem = new comp();
        elem->value = rand() % 20;
        elem->next = top;
        top = elem;
    }
}

void Mystack::print() { //принимает указатель на вершину стека
    comp *element = top; //устанавливаем q на вершину
    while (element) { //пока q не пустой (while(q) эквивалентно while(q != NULL))
        cout<<element->value<<" ";//выводим на экран данные ячейки стека
        element = element->next;//после того как вывели передвигаем q на следующий элемент(ячейку)
    }
    cout<<endl;
}

bool Mystack::operator==(const Mystack &other){
    if(this->size_stack == other.size_stack){
        comp *element_stack_1 = top;
        comp *element_stack_2 = other.top;
        while(element_stack_1){
            if(element_stack_1->value != element_stack_2->value){
                return false;
            }else{
                element_stack_1 = element_stack_1 -> next;
                element_stack_2 = element_stack_2 -> next;
            }
        }
        return true;
    }
    return false;
}

bool Mystack::operator!=(const Mystack &other){
    if(this->size_stack == other.size_stack){
        comp *element_stack_1 = top;
        comp *element_stack_2 = other.top;
        while(element_stack_1){
            if(element_stack_1->value != element_stack_2->value){
                return true;
            }else{
                element_stack_1 = element_stack_1 -> next;
                element_stack_2 = element_stack_2 -> next;
            }
        }
        return false;
    }
    return true;
}

bool Mystack::operator > (const Mystack &other){
    comp *element_stack_1 = top;
    comp *element_stack_2 = other.top;
    int sum_stack_1 = 0, sum_stack_2 = 0;
    while(element_stack_1){
        sum_stack_1 += element_stack_1->value;
        element_stack_1 = element_stack_1 -> next;
    }
    while(element_stack_2){
        sum_stack_2 += element_stack_2->value;
        element_stack_2 = element_stack_2 -> next;
    }
    if(sum_stack_1 > sum_stack_2){
        return true;
    }
    return false;
}

bool Mystack::operator < (const Mystack &other){
    comp *element_stack_1 = top;
    comp *element_stack_2 = other.top;
    int sum_stack_1 = 0, sum_stack_2 = 0;
    while(element_stack_1){
        sum_stack_1 += element_stack_1->value;
        element_stack_1 = element_stack_1 -> next;
    }
    while(element_stack_2){
        sum_stack_2 += element_stack_2->value;
        element_stack_2 = element_stack_2 -> next;
    }
    if(sum_stack_1 < sum_stack_2){
        return true;
    }
    return false;
}

bool Mystack::operator >= (const Mystack &other){
    comp *element_stack_1 = top;
    comp *element_stack_2 = other.top;
    int sum_stack_1 = 0, sum_stack_2 = 0;
    bool check = false;
    if(this->size_stack == other.size_stack){
        comp *element_stack_1 = top;
        comp *element_stack_2 = other.top;
        while(element_stack_1){
            if(element_stack_1->value != element_stack_2->value){
                check = false;
                break;
            }else{
                element_stack_1 = element_stack_1 -> next;
                element_stack_2 = element_stack_2 -> next;
                check = true;
            }
        }
      
    }
    if(check == true){
        return true;
    }
    else{
         element_stack_1 = top;
         element_stack_2 = other.top;
    while(element_stack_1){
        sum_stack_1 += element_stack_1->value;
        element_stack_1 = element_stack_1 -> next;
    }
    while(element_stack_2){
        sum_stack_2 += element_stack_2->value;
        element_stack_2 = element_stack_2 -> next;
    }
    if(sum_stack_1 > sum_stack_2){
        check = true;
    }
    }
    if(check == true){
        return true;
    }else
    return false;
}

bool Mystack::operator <= (const Mystack &other){
    comp *element_stack_1 = top;
    comp *element_stack_2 = other.top;
    int sum_stack_1 = 0, sum_stack_2 = 0;
    bool check = false;
    if(this->size_stack == other.size_stack){
        comp *element_stack_1 = top;
        comp *element_stack_2 = other.top;
        while(element_stack_1){
            if(element_stack_1->value != element_stack_2->value){
                check = false;
                break;
            }else{
                element_stack_1 = element_stack_1 -> next;
                element_stack_2 = element_stack_2 -> next;
                check = true;
            }
        }
      
    }
    if(check == true){
        return true;
    }
    else{
         element_stack_1 = top;
         element_stack_2 = other.top;
    while(element_stack_1){
        sum_stack_1 += element_stack_1->value;
        element_stack_1 = element_stack_1 -> next;
    }
    while(element_stack_2){
        sum_stack_2 += element_stack_2->value;
        element_stack_2 = element_stack_2 -> next;
    }
    if(sum_stack_1 < sum_stack_2){
        check = true;
    }
    }
    if(check == true){
        return true;
    }else
    return false;
}
