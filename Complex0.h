/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Complex0.h
 * Author: igor
 *
 * Created on April 1, 2018, 12:18 PM
 */

#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>
using namespace std;


class ComplexNumber{

    int re;
    int im;
    
public:
    ComplexNumber(int, int);
    ComplexNumber add(ComplexNumber);
    ComplexNumber sub(ComplexNumber);
    ComplexNumber div(ComplexNumber);
    ComplexNumber multi(ComplexNumber);
    ComplexNumber multi(int);
    ComplexNumber conjugate(void);
    
    ComplexNumber operator+(ComplexNumber);
    ComplexNumber operator-(ComplexNumber);
    ComplexNumber operator*(ComplexNumber);
    ComplexNumber operator*(int);
    
    friend ComplexNumber operator *( const double &, const ComplexNumber&);
    friend ostream & operator<< (ostream &, const ComplexNumber &);
    
};

#endif /* COMPLEX0_H */
