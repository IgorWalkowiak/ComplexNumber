/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ComplexNumber.cpp
 * Author: igor
 * 
 * Created on April 1, 2018, 12:18 PM
 */
#include <iostream>
#include "Complex0.h"

using namespace std;
ComplexNumber::ComplexNumber(int a, int b): re(a), im(b)
{
  
}

ComplexNumber ComplexNumber::add(ComplexNumber a)
{
    
    return ComplexNumber(a.re+re, a.im+im);

}

ComplexNumber ComplexNumber::sub(ComplexNumber a)
{
    return ComplexNumber(re-a.re ,im-a.im);
}

ComplexNumber ComplexNumber::multi(ComplexNumber a)
{
    return ComplexNumber(re*a.re-im*a.im,re*a.im+im*a.re);
}
ComplexNumber ComplexNumber::multi(int a)
{
    return ComplexNumber(re*a,im*a);
}

ComplexNumber ComplexNumber::conjugate(void)
{
    return ComplexNumber(re,-im);
}

ComplexNumber ComplexNumber::operator *(int a)
{
    return this->multi(a);
}

ComplexNumber ComplexNumber::operator *(ComplexNumber a)
{
    return this->multi(a);
}

ComplexNumber ComplexNumber::operator +(ComplexNumber a)
{
    return this->add(a);
}

ComplexNumber ComplexNumber::operator -(ComplexNumber a)
{
    return this->sub(a);
}



ComplexNumber operator *( const double & a, const ComplexNumber & cmplx )
{
    return ComplexNumber( cmplx.re*a,cmplx.im*a );
}


 ostream & operator<< (ostream &wyjscie, const ComplexNumber &s) {
   return wyjscie << "Czesc rzeczywista: "<<s.re<< endl << "Czesc urojona: " <<s.im<<endl;
 }
