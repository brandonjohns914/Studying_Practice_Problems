//
//  administrator.hpp
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef administrator_h
#define administrator_h

#include <stdio.h>
#include <iostream>
#include "salariedemployee.h"
#include "employee.h"


using namespace std;


class Administrator : public SalariedEmployee
{
    public:
        Administrator();
        Administrator(string theName, string theSsn, double salary);
        void inputAdminData();
        void outputAdminData();
        void printCheck();
    private:
        string adminTitle;//administrator's title
        string workingArea;//area of responsibility
        string supervisorName;//immediate supervisor

};








#endif /* administrator_h */
