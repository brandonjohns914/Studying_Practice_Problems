//
//  numDoubles.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "numDoubles.hpp"
#include <iostream>
using namespace std; 

void outputnumDoubles()
{
    int numDoubles;
    double sum=0.0;
    cout<<" enter the number of doubles: " <<endl;
    cin>>numDoubles;
    double *doublePtr=new double[numDoubles];
    for (int i=0; i< numDoubles; i++)
    {
        cout<<"enter the value "<<(i+1)<< ":";
        cin>> doublePtr[i];
    }
    for (int i=0; i< numDoubles; i++)
    {
        sum+=doublePtr[i];
    }
    cout<<"Average : "<<(sum/numDoubles)<<endl;
    
    delete [] doublePtr;

}
