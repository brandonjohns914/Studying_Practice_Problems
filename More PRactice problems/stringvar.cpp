//
//  rational.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "stringvar.hpp"
#include<iostream>
#include <fstream>
#include <cstdlib>
#include<string>
#include <cstddef>

using namespace std;
StringVar::StringVar(int size):max_length(size)
{
    value=new char[max_length+1];
    value[0]='\0';
}

StringVar::StringVar():max_length(100)
{
    value=new char[max_length+1];
    value[0]='\0';
}
char * StringVar:: copy_piece(int start, int end)
{
    char*dest=new char[end-start+1];
    strncpy(dest,&value[start],end-start+1);
    dest[end-start+1]='\0';
    return dest;
}

char StringVar::one_char(int index)
{
    if(index>=0 && index<max_length)
    {
        
    }
    return value[index];
    
}

void StringVar:: set_char(int index, char ch)
{
    if(index>=0 && index<max_length)
    {
        value[index]=ch;
    }
}

StringVar::~StringVar()
{
    delete [] value;
}

StringVar:: StringVar(const char a[]):max_length(strlen(a))
{
    value=new char[max_length+1];
    strcpy(value,a);
}

StringVar:: StringVar(const StringVar & string_object):max_length(string_object.length())
{
    value= new char[max_length+1];
    strcpy(value,string_object.value);
}

int StringVar:: length() const
{
    return strlen(value);
}
void StringVar:: input_line(istream &ins)
{
    ins>>value;
}

bool operator==(const StringVar& strVar, const StringVar &strOther)
{
    char *temp1=new char[strVar.length()+1];
    char *temp2=new char[strOther.length()+1];
    strcpy(temp1,strVar.value);
    strcpy(temp2,strOther.value);
    
    return strcmp(temp1,temp2)==0;
}

char * operator +(const StringVar& strVar, const StringVar &strOther)
{
    char *newvalue=new char[ strVar.length()+strOther.length()+1];
    newvalue[0]='\0';
    
    strcat(newvalue,strVar.value);
    strcat(newvalue,strOther.value);
    
    return newvalue;
    
}

ostream &operator<<(ostream &outs,const StringVar& the_string)
{
    outs<<the_string.value;
    return outs;
}

void stringvaroutput()
{
    StringVar your_name(30);
    
    cout<<"checking input_line: " <<endl;
    your_name.input_line(cin);
    cout<< your_name;
    
    cout<<"create chracter" <<endl;
    StringVar ours("brandon");
    cout<<ours;
    cout<<"checking set_char at 0" <<endl;
    ours.set_char(0,'b');
    cout<<ours;
    
    cout<< "checking equality " <<endl;
    
    if(your_name==ours)
    {
        cout<<"two objects are equal" <<endl;
    }
    else
    {
        cout<< "not equal" <<endl;
    }
    
    cout<<"checking concatenate + operator " <<endl;
    cout<< your_name+ " " + ours;
    

}
