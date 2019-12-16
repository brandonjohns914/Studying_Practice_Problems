//
//  month.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "month.hpp"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


MONTH::MONTH()
{
    
}


MONTH:: MONTH(int integer)
{
    
    if(integer >=1 && integer <=12)
    {
        month=integer;
    }
    else
    {
        cout<< integer<<" is not a value month's integer. " <<endl;
      
    }
}


MONTH:: MONTH(char firstChar, char secondChar, char thirdChar)
{
    firstChar= tolower(firstChar);
    secondChar=tolower(secondChar);
    thirdChar=tolower(thirdChar);
    if(firstChar=='j' &&secondChar=='a' && thirdChar=='n')
    {
        month=1;
    }
    else if(firstChar=='f' &&secondChar=='e' && thirdChar=='b')
    {
        month=2;
    }
    else if(firstChar=='m' &&secondChar== 'a' && thirdChar=='r')
    {
        month=3;
    }
    else if(firstChar=='a' &&secondChar=='p' && thirdChar=='r')
    {
        month=4;
    }
    else if(firstChar=='m' &&secondChar=='a' && thirdChar=='y')
    {
        month=5;
    }
    else if(firstChar=='j' &&secondChar=='u' && thirdChar=='n')
    {
        month=6;
    }
    else if(firstChar=='j' &&secondChar=='u' && thirdChar=='l')
    {
        month=7;
    }
    else if(firstChar=='a' &&secondChar=='u' && thirdChar=='g')
    {
        month=8;
    }
    else if(firstChar=='s' &&secondChar=='e' && thirdChar=='p')
    {
        month=9;
    }
    else if(firstChar=='o' &&secondChar=='c' && thirdChar=='t')
    {
        month=10;
    }
    else if(firstChar=='n' &&secondChar=='o' && thirdChar=='v')
    {
        month=11;
    }
    else if(firstChar=='d' &&secondChar=='e' && thirdChar=='c')
    {
        month=12;
    }
    else
    {
        cout<<firstChar<<secondChar<<thirdChar<<" there is no matching month that matches this" <<endl;
    }

    
}
void MONTH:: getMonthUsingInteger(istream& in)
{
    in>> month;
}
void  MONTH:: getMonthUsingFirstThreeCharacters(istream& in)
{
    char firstChar, secondChar, thirdChar;
    
    in>> firstChar >> secondChar >> thirdChar;
    
    firstChar= tolower(firstChar);
    secondChar=tolower(secondChar);
    thirdChar=tolower(thirdChar);
    if(firstChar=='j' &&secondChar=='a' && thirdChar=='n')
    {
        month=1;
    }
    else if(firstChar=='f' &&secondChar=='e' && thirdChar=='b')
    {
        month=2;
    }
    else if(firstChar=='m' &&secondChar== 'a' && thirdChar=='r')
    {
        month=3;
    }
    else if(firstChar=='a' &&secondChar=='p' && thirdChar=='r')
    {
        month=4;
    }
    else if(firstChar=='m' &&secondChar=='a' && thirdChar=='y')
    {
        month=5;
    }
    else if(firstChar=='j' &&secondChar=='u' && thirdChar=='n')
    {
        month=6;
    }
    else if(firstChar=='j' &&secondChar=='u' && thirdChar=='l')
    {
        month=7;
    }
    else if(firstChar=='a' &&secondChar=='u' && thirdChar=='g')
    {
        month=8;
    }
    else if(firstChar=='s' &&secondChar=='e' && thirdChar=='p')
    {
        month=9;
    }
    else if(firstChar=='o' &&secondChar=='c' && thirdChar=='t')
    {
        month=10;
    }
    else if(firstChar=='n' &&secondChar=='o' && thirdChar=='v')
    {
        month=11;
    }
    else if(firstChar=='d' &&secondChar=='e' && thirdChar=='c')
    {
        month=12;
    }
    else
    {
        month=0;
    }
  
}
void MONTH:: displayMonthAsInteger(ostream& out)
{
    if(month>=1 && month<=12)
    {
        out<< month;
    }
    else
    {
        out<<"no month's integer is existed" <<endl;
    }
}
void MONTH:: displaymonthasFirstThreeCharacter(ostream& out)
{
    switch(month)
    {
        case 1:
            out<<"Jan";
            break;
        case 2:
            out<<"Feb";
            break;
        case 3:
            out<<"Mar";
            break;
        case 4:
            out<<"Apr";
            break;
        case 5:
            out<<"May";
            break;
        case 6:
            out<<"Jun";
            break;
        case 7:
            out<<"Jul";
            break;
        case 8:
            out<<"Aug";
            break;
        case 9:
            out<<"Sep";
            break;
        case 10:
            out<<"Oct";
            break;
        case 11:
            out<<"Nov";
            break;
        case 12:
            out<<"Dec";
            break;
        default:
            out<<"No month's name exists";
            
    }
}
MONTH MONTH:: getNextMonth()
{
    int nextMonth=0;
    if(month>=1 && month<=12)
    {
        nextMonth=(month%12)+1;
    }
    return MONTH(nextMonth);
}
void monthoutput()
{
    MONTH Month;
    cout<<"testing constructor (char char char) for all months: "
    <<endl;
    Month=MONTH('j','a','n');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('f','e','b');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('m','a','r');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('a','p','r');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('m','a','y');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('j','u','n');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('j','u','l');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('a','u','g');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('s','e','p');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('o','c','t');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('n','o','v');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl;
    Month=MONTH('d','e','c');
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<"\t";
    Month.displayMonthAsInteger(cout);
    cout<<endl <<endl;
    
    cout<<"testing the Month(int): " <<endl;
    for(int m=1; m<=12; m++)
    {
        Month=MONTH(m);
        Month.displayMonthAsInteger(cout);
        cout<<"\t";
        Month.displaymonthasFirstThreeCharacter(cout);
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"testing the fucntion getMonthUsingFirstThreeCharacters(): " <<endl;
    Month=MONTH();
    cout<<"Enter the first three characters of a month: ";
    Month.getMonthUsingFirstThreeCharacters(cin);
    cout<<" Month Name :"<<endl;
    Month.displayMonthAsInteger(cout);
    cout<<endl<<endl;
    
    cout<<"Testing the function GetMonthByNumber(): "<<endl;
    Month=MONTH();
    cout<<"Ebter an Integer of a month: ";
    Month.getMonthUsingInteger(cin);
    cout<<"Month integer: ";
    Month.displayMonthAsInteger(cout);
    cout<< endl <<"Month name: ";
    Month.displaymonthasFirstThreeCharacter(cout);
    cout<<endl<<endl;
    
    cout<<"testing next month: " <<endl;
    Month=MONTH();
    cout<<"enter an integer of a month: ";
    Month.getMonthUsingInteger(cin);
    cout<<"Current Month integer: " ;
    Month.displayMonthAsInteger(cout);
    cout<<endl << "current Month name: ";
    Month.displaymonthasFirstThreeCharacter(cout);
    
    MONTH NextMonth=Month.getNextMonth();
    cout<<endl<<"next Month Integer: " ;
    NextMonth.displayMonthAsInteger(cout);
       cout<< endl <<"next Month Name: ";
    NextMonth.displaymonthasFirstThreeCharacter(cout);
    cout<<endl;
    
    
 
}

