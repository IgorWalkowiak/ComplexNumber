/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: igor
 *
 * Created on April 1, 2018, 12:16 PM
 */

#include <iostream>
#include "Complex0.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv){
    ComplexNumber a(1,2);
    ComplexNumber b(4,5);
    cout<<"a "<<endl<<a<<endl<<"b "<<endl<<b;
    cout<<"Conjugate of b "<<endl<<b.conjugate();
    cout<<"a * b "<<endl<<a*b;
    cout<<"a + b "<<endl<<a+b;
    cout<<"a - b "<<endl<<a-b;
    cout<<"a * 5 "<<endl<<a*5;
    cout<<"5 * a "<<endl<<5*a;
    return 0;
}

