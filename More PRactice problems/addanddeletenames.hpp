//
//  addanddeletenames.hpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef addanddeletenames_hpp
#define addanddeletenames_hpp

#include <stdio.h>
using namespace std;
#include<iostream>


string *addEntry(string* dArray, int &size, string newEntry);
string *deleteEntry(string *dArray,int &size, string todelete);
void print(string*dArray,int size);
void addanddeletenamesoutput();

#endif /* addanddeletenames_hpp */
