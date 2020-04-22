#include "Punct.h"

Punct::Punct(const int x,const int y):Object(2){
    this->x=x;
    this->y=y;
}
Punct::Punct(const Punct &other)Object:(other){
    this->x=other.x;
    this->y=other.y;
}

istream& operator >> (istream& input, Punct &p){
    input>>p.x>>p.y;
    return input;
}

void Punct::display(ostream&output,Punct &p){
    output<<p.x<<" "<<p.y<<"\n";
}

ostream& operator <<(ostream&output,Punct &p){
    p.display();
    return output;
}

Punct::~Punct(){
}
