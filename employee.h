//DISPLAY 15.1 Interface for the Base Class Employee
//This is the header file employee.h. 
//This is the interface for the class Employee.
//This is primarily intended to be used as a base class to derive
//classes for different kinds of employees.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
    Employee( );
    Employee(string the_name, string the_ssn);
    virtual string get_name( ) const;
    virtual string get_ssn( ) const;
   virtual double get_net_pay( ) const;
    virtual void set_name(string new_name);
    virtual void set_ssn(string new_ssn);
    virtual void set_net_pay(double new_net_pay);
    virtual void print_check( ) const;
protected:
    string name;
    string ssn;
    double net_pay;
};

#endif //EMPLOYEE_H
