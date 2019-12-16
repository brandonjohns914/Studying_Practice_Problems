//
//  odometer.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "odometer.hpp"
#include<iostream>
using namespace std;

Odometer:: Odometer()
{
    milesDrive=0;
    fuelEfficent=0;
}
void Odometer:: resetMiles()
{
    milesDrive=0;
}
void Odometer:: setFuelEfficent( double amount)
{
    fuelEfficent=amount;
}
void Odometer:: addMiles(double miles)
{
    milesDrive+=miles;
}
double Odometer:: getConsumption()
{
    return milesDrive/10.0;
}
double Odometer:: getMiles()
{
    return milesDrive;
}
double Odometer:: getFuelEfficent()
{
    return fuelEfficent;
}


void odometeroutput()
{
    Odometer test1;
    cout<<"initial odometer: " <<endl;
    cout<<"Miles Driven: " <<test1.getMiles()<<endl;
    cout<<"Fuel Efficency: "<<test1.getFuelEfficent()<<endl<<endl;
    cout<<"adding 54.5 miles to odometer" <<endl;
    test1.addMiles(54.5);
    cout<<"miles driven: "<< test1.getMiles()<<endl<<endl;
    
    cout<<"the consuption rate of 54.5 is: " <<endl;
    cout<<"fuel efficency: "<< test1.getConsumption()<<"miles per gallon" <<endl <<endl;
    cout<<"resetting the odometer" <<endl;
    test1.resetMiles();
    cout<<"miles driven: " << test1.getMiles()<<endl;
    
}
