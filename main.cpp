//
//  main.cpp
//  tp_lab_2
//
//  Created by Андрей Осадченко on 21.04.2022.
//

#include <iostream>
#include "coordinates.hpp"
#include "My_stack.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    coordinates cords;
    int size = 0;
    Mystack stack;
    Mystack stack2;
    cout<<"1 - add cords\n2 - print cords\n3 - cords++\n4 - ++cords\n5 - --cords\n6 - cords--\n";
    cout<<"7 - push stack\n8 - stack ==\n9 - stack !=\n10 - stack >\n11 - stack <\n12 - stack >=\n13 - stack <=\n14 - print stack\n";
    int n = 0;
    while(n != -1){
    cin >> n;

    if(n == 1){
        cords.input_coordinates();
    }else if (n == 2){
        cords.output_coordinates();
    }else if (n == 3){
        cords++;
    }else if (n == 4){
        ++cords;
    }else if (n == 5){
        --cords;
    }else if (n == 6){
        cords--;
    }else if (n == 7){
        cout <<"print size"<<endl;
        cin >> size;
        stack.push(size);
        stack2.push(size);
    }else if (n == 8){
        if(stack == stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 9){
        if(stack != stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 10){
        if(stack > stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 11){
        if(stack < stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 12){
        if(stack >= stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 13){
        if(stack <= stack2){
            cout << "true\n";
        }else
            cout << "fasle\n";
    }else if (n == 14){
        stack.print();
    }
    }
    return 0;
}

