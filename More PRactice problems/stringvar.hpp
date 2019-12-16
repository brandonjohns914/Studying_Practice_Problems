//
//  rational.hpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef stringvar_hpp
#define stringvar_hpp

#include <stdio.h>
#include<iostream>
using namespace std;

class StringVar
{
private:
    char*value;
    int max_length;
    
public:
    StringVar();
    StringVar(int size);
    StringVar(const char a[]);
    StringVar( const StringVar & string_object);
    ~StringVar();
    char* copy_piece(int start, int end);
    char one_char(int index);
    void set_char(int index, char ch);
    friend bool operator==(const StringVar &strVar,const StringVar& strOther);
    friend char* operator+(const StringVar &strVar,const StringVar& strOther);
    int length() const;
    void input_line(istream& ins);
    friend ostream &operator<<(ostream& outs, const StringVar &the_string);
    
};
void stringvaroutput();



#endif /* stringvar_hpp */
