//
//  rectangle.h
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
#include <iostream>
#include "figure.h"
#include"triangle.h"

using namespace std;

class Rectangle: public Figure
{
public:
    void erase();
    void draw(); 
};


#endif /* rectangle_h */
