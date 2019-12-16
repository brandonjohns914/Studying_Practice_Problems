//
//  palindrome.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "palindrome.hpp"
#include <iostream>
using namespace std;

bool isPalindrome(char* cstr)
{
    char*front=cstr;
    char*back= cstr+strlen(cstr)-1;
    
    while(front<back)
    {
        if (*front!=*back)
        {
            return false;
        }
        --back;
        front++;
    }
    return true;
}
void palindromeoutput()
{
    char s1[100];
    cout<<"enter the string: "<<endl;
    cin.getline(s1,100);
    
    if(isPalindrome(s1))
    {
        cout<<s1<< " is a palindrome " <<endl;
    }
    else{
        cout<<s1<<"is not a palindrome" <<endl;
    }
    

}
