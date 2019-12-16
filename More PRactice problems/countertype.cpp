//
//  countertype.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "countertype.hpp"
#include <iostream>
using namespace std; 
CounterType:: CounterType()
{
    counter=0;
}

void CounterType:: setCounter(int counter)
{
    if(counter<0)
    {
        cout<<"Counter value cannot be a negative number" <<endl;
    }
    else
    {
        this -> counter=counter;
    }
}

void CounterType:: addCounter()
{
    counter=counter+1;
    
}
void CounterType:: minusCounter()
{
    if(counter<=0)
    {
        cout<< "counter cannot be less than zero" <<endl;
    }
    else
    {
        counter=counter-1;
    }
}
int CounterType:: getCounter()
{
    return counter;
}
void countertypeoutput()
{
    int num;
    cout<<"enter a number: "<<endl;
    cin>> num;
    CounterType count;
    count.setCounter(num);
    cout<< "counter value is: " << count.getCounter()<<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"subtact: " << endl;
    count.minusCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<<"addition : " << endl;
    count.addCounter();
    cout<<"new value: " << count.getCounter() <<endl <<endl;
    
    cout<< "Resetting counter" <<endl;
    count.setCounter(num);
    cout<<"current value: " << count.getCounter()<<endl <<endl;

}

