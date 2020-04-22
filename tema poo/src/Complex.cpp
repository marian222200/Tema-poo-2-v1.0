#include "Complex.h"

Complex::Complex(int real,int imaginar):Object(2){
    this->real=real;
    this->imaginar=imaginar;
}

Complex::~Complex(){
    cout<<"distrugem nr complex\n";
}

Complex::Complex(const Complex & other):Object(other){
    this->imaginar=other.imaginar;
    this->real=other.real;
}

istream& operator >> (istream& input, Complex &c){
    input>>c.real>>c.imaginar;
    return input;
}

void Complex::display(ostream&output,Complex &c){
    output<<c.real<<" "<<c.imaginar<<"\n";
}

ostream& operator <<(ostream&output,Complex &c){
    c.display(output,c);
    return output;
}
