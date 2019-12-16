//
//  countertype.hpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef countertype_hpp
#define countertype_hpp

#include <stdio.h>
#include <iostream>
using namespace std; 

class CounterType
{
private:
    int counter;
public:
    CounterType();
    void setCounter(int counter);
    int getCounter();
    void addCounter();
    void minusCounter();
    void display(ostream& out);
    
};

void countertypeoutput();
#endif /* countertype_hpp */
