//
//  main.cpp
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>
#include "figure.h"
#include"triangle.h"
#include "rectangle.h"
#include "administrator.h"
#include "employee.h"
#include "salariedemployee.h"
using namespace std;


int main()
{
    /// number 1
    
    string name;
    string job;
    int num;
   
    Administrator ob(name,job,num);
    ob. inputAdminData();
    ob.outputAdminData();
    ob.printCheck();
    
    
    ///// number 2
    
    Figure *Fig;
    Triangle *Tri = new Triangle;
    Fig=Tri;
    Fig->draw();
    Fig->center();
    
    
    
    
    Rectangle *Rect= new Rectangle;
    Fig=Rect; 
    Fig->draw();
    Fig->center();
    
    
    
    
    
   
    
    Triangle tri;
    tri.draw();
    tri.center();
    Rectangle rect;
    rect.draw();
    rect.erase();
    
    
}
