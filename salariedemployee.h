//DISPLAY 15.4 Interface for the Derived Class SalariedEmployee
//This is the header file salariedemployee.h. 
//This is the interface for the class SalariedEmployee.
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( );
    SalariedEmployee (string the_name, string the_ssn,
                      double the_weekly_salary);
   virtual double get_salary( ) const;
   virtual void set_salary(double new_salary);
   virtual void print_check( );
protected:
    double salary;//weekly
};

#endif //SALARIEDEMPLOYEE_H

