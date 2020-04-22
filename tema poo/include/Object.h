#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Object{
    int size;
    public:
    Object(const int size=0);
    virtual ~Object();
    virtual void display()=0;
};
