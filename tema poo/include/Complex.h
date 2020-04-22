#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Complex:public Object
{
    int real,imaginar;
    public:
        Complex(const int real=0,const int imaginar=0);
        Complex(const Complex & other);
        friend istream& operator>>(istream &,Complex&);
        friend ostream& operator<<(ostream &,Complex&);
        void display(ostream&,Complex&);
        virtual ~Complex();
};
