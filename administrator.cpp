//
//  administrator.cpp
//  lab9
//
//  Created by Brandon Johns on 5/9/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include <iostream>
#include <string>
#include "administrator.h"
#include "employee.h"
#include "salariedemployee.h"


using namespace std;


    
    Administrator::Administrator(string theName, string theSsn, double theAnnualSalary):SalariedEmployee()
    {
        //deliberately empty
    }
    
void Administrator::inputAdminData()
    {
        cout << " Enter the details of the administrator: " << get_name() << endl;
        cout << " Enter the admin title: " << endl;
        getline(cin, adminTitle);
        cout << " Enter the area of responsibility: " << endl;
        getline(cin, workingArea);
        cout << " Enter the immediate supervisor's name: " << endl;
        getline(cin, supervisorName);
    }
    
    void Administrator::outputAdminData()
    {
        cout << "Name: " << get_name() << endl;
        cout << "Title: " << adminTitle << endl;
        cout << "Area of responsibility: " << workingArea << endl;
        cout << "Immediate supervisor: " << supervisorName << endl;
    }
    
    void Administrator::printCheck()
    {
        set_net_pay(salary);
        cout << "\n___________________________________\n";
        cout << "Pay to the order of " << get_name() << endl;
        cout << "The sum of" << get_net_pay() << "Dollars\n";
        cout << "______________________________________\n"
        << "Check Stub Not negotiable \n";
        cout << "Employee Number: " << get_ssn() << endl;
        cout << "Salaried Employee(Administrator). Regular Pay: "
        << salary << endl;
        cout << "______________________________________\n";
    }
        
    

