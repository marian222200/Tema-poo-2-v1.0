#pragma once
#include<iostream>
#include"Punct.h"
#include"Complex.h"
class ObArray : public Object {
Complex **p; // vector de pointeri
int size; // numar de elemente la un moment dat
int grows; // increment de creştere a dimensiunii
int dimens; // dimensiune vector
public:
    ObArray(int grows=0,int size=0, int dimens=0);//Constructor
    ~ObArray();//Destructor
    void RemoveAll();//Elimina toate obiectele din vector
    int getSize(); // Intoarce numarul de elemente din vector.
    void add(Complex* x); //Adauga un element la vector.
    void insertAt(int i, Complex *x);//Insereaza un element pe o pozitie data
    void removeAt(int i); //Elimina elementul de pe pozitia i
    Complex* getAt(int i); //Intoarce elementul de la pozitia i
    void display();// Afisare elementelor din tablou.
};
