/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on October 30, 2017, 1:42 PM
 */

#include <iostream> 
#include <exception>

using namespace std; 


int main(void) {
int a = 8, b = 0, c = 0; 
cin >> b; 
try
{
    if(b==0 || isdigit(b))
    {
        throw 1;
    }
    else
    {
       c=a/b; 
    }
}
catch(int& e)
{
    cout << "Please enter a whole number that is not a 0." << endl;
}
 cout << c << endl;
return 0; 
}

