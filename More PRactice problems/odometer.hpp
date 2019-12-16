//
//  odometer.hpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#ifndef odometer_hpp
#define odometer_hpp

#include <stdio.h>
#include<iostream>
using namespace std;

class Odometer
{
private:
    double milesDrive;
    double fuelEfficent;
public:
    Odometer();
    void resetMiles();
    void setFuelEfficent( double amount);
    void addMiles(double miles);
    double getConsumption();
    double getMiles();
    double getFuelEfficent();
    
};

void odometeroutput();

#endif /* odometer_hpp */
