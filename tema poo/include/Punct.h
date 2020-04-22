#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Punct:public Object
{
    int x,y;
    public:
        Punct(const int x=0,const int y=0);
        Punct(const Punct&other);
        friend istream& operator>>(istream &,Punct&);
        friend ostream& operator<<(ostream &,Punct&);
        void display(istream&);
        virtual ~Punct();
};
