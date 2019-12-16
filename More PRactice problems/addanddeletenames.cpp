//
//  addanddeletenames.cpp
//  Practice_exam3
//
//  Created by Brandon Johns on 4/29/18.
//  Copyright © 2018 Brandon Johns. All rights reserved.
//

#include "addanddeletenames.hpp"
#include <iostream>
using namespace std; 

string *addEntry(string* dArray, int &size, string newEntry)
{
    string*newArray=new string[size+1];
    for (int i=0; i<size; i++)
    {
        newArray[i]=dArray[i];
    }
    newArray[size]=newEntry;
    size++;
    delete [] dArray;
    return newArray;
}
string *deleteEntry(string *dArray,int &size, string todelete)
{
    string *result=dArray;
    int index=-1;
    for (int i=0; i<size; i++)
    {
        if (dArray[i]== todelete)
        {
            index=i;
            break;
        }
    }
    if(index ==-1)
    {
        return result;
        
    }
    else
    {
        result =new string[size-1];
        int index=0;
        for(int i=0; i<size; i++)
        {
            if(i!=index)
            {
                result[index]=dArray[i];
                index++;
            }
        }
        size--;
        delete [] dArray;
    }
    return result;
}
void print(string*dArray,int size)
{
    for (int i=0; i<size;i++)
    {
        cout<<*(dArray+i)<<endl;
    }
    
    cout<<endl;
}
void addanddeletenamesoutput()
{
    int size =5;
    
    string*names=new string[size];
    names[0]="Reena";
    names[1]="William";
    names[2]="Edan";
    names[3]="Martin";
    names[4]="Carol";
    
    cout<<"Initial List: "<<endl;
    print(names,size);
    
    names=addEntry(names, size, "Rob");
    names=addEntry(names, size, "Aeron");
    cout<<"after inserition: "<<endl;
    print(names,size);
    cout<<endl<<endl;
    names=deleteEntry(names, size, "Carol");
    cout<<"after deletion: " <<endl;
    print(names,size);
    cout<< endl<<endl;
    delete []names;
    
    
    
}
