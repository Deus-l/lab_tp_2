//
//  coordinates.cpp
//  tp_lab_2
//
//  Created by Андрей Осадченко on 21.04.2022.
//

#include "coordinates.hpp"

using namespace std;

void coordinates::input_coordinates(){
    cout << "Print x: ";
    cin >> *x;
    cout << "Print y: ";
    cin >> *y;
    cout << "Print z: ";
    cin >> *z;
}

void coordinates::output_coordinates(){
    cout << "x = " << *x << " y = " << *y << " z = " << *z <<endl;
}

coordinates coordinates::operator++(int){
    coordinates temp = *this;
    *this->x += 1.5;
    *this->y += 1.5;
    *this->z += 1.5;
    return temp;
}

coordinates coordinates::operator--(int){
    coordinates temp = *this;
    *this->x -= 5.9;
    *this->y -= 5.9;
    *this->z -= 5.9;
   
    return temp;
}

void coordinates::operator--(){
    cout << "input you value: ";
    double value;
    cin >> value;
    char temp = 0;
    cout<< "Print cords for delete end print . : ";
    while(temp != '.'){
        cin >> temp;
        if(temp == 'x'){
            value -= *x;
        }else if (temp == 'y'){
            value -= *y;
        }else if (temp == 'z'){
            value -= *z;
        }
    }
    cout<<value<<endl;
}

//друж фк
void operator++(const coordinates &obj){
    cout <<  *obj.x + *obj.y + *obj.z <<endl;
}
