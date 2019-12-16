//
//  month.hpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef month_hpp
#define month_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class MONTH
{
private:
    int month;
public:
    MONTH();
    MONTH(int integer);
    MONTH(char firstChar, char secondChar, char thirdChar);
    void getMonthUsingInteger(istream& in);
    void getMonthUsingFirstThreeCharacters(istream& in);
    void displayMonthAsInteger(ostream& out);
    void displaymonthasFirstThreeCharacter(ostream& out);
    MONTH getNextMonth();
    
    
};

void monthoutput(); 


#endif /* month_hpp */
