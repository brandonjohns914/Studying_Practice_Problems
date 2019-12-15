//
//  triangle.h
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef triangle_h
#define triangle_h

#include <iostream>
#include "figure.h"
using namespace std;

class Triangle: public Figure
{
public:
    void draw();
    void erase();
};






#endif /* triangle_h */
