//
//  frontandrear.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "frontandrear.hpp"
#include <iostream>
using namespace std;

void reverse(char *s)
{
    char *front;
    char *rear;
    char temp;
    
    front=s;
    rear=s+strlen(s)-1;
    while(front<rear)
    {
        temp=*front;
        *front=*rear;
        *rear=temp;
        front++;
        rear--;
        
    }
}
void frontandrearoutput()
{
    char str1[]="hello";
    char str2[]="foobar";
    cout<<"the strings before reverseing: " <<endl;
    cout<< str1<< " "<< str2 <<endl;
    reverse(str1);
    reverse(str2);
    cout<<"the string after reversing: "<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
}
