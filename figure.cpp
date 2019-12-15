//
//  figure.cpp
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "figure.h"

using namespace std;
void Figure:: erase()
{
    cout<<"figure: erase(): called funciton in the Figure class." <<endl;
}

void Figure:: draw()
{
    cout<<"figure:draw(): called draw function int he figure class" <<endl;
}

void Figure:: center()
{
    cout<<"figure:center(): called draw function int he figure class" <<endl;
    
    erase();
    draw(); 
}


