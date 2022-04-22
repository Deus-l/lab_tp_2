//
//  coordinates.hpp
//  tp_lab_2
//
//  Created by Андрей Осадченко on 21.04.2022.
//

#pragma once
#include <iostream>
class coordinates{
public:
    coordinates operator++(int);
    coordinates operator--(int);
    void operator--();
    void input_coordinates();
    void output_coordinates();
    
private:
    double *x = new double;
    double *y = new double;
    double *z = new double;
    friend void operator++(const coordinates & obj);

    
};
