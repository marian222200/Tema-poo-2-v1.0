#include "ObArray.h"

ObArray::ObArray(int grows,int size, int dimens){
    this->grows=grows;
    this->size=size;
    this->dimens=dimens;
    p[0]=NULL;
    if(size!=0)
    {
        for(int i=0;i<size;i++)
            p[i]=new Complex();
    }
}
void ObArray::RemoveAll(){
    for(int i=1;i<=this->size;i++)delete p[i];
}
int ObArray::getSize(){
    return size;
}
void ObArray::add(Complex *x){
    this->size++;
    this->dimens+=this->grows;
    p[this->size-1]=new Complex(x);
}
void ObArray::insertAt(int i,Complex *x)
{
    p[this->size]=new Complex(p[this->size-1]);
    for(int j=this->size-1;j>i;j--)
        p[j]=p[j]-1;
    p[i]=new Complex(x);
    this->size++;
    this->dimens+=this->grows;
}
void ObArray::removeAt(int i){
    delete p[i];
    for(int j=i;j<this->size-1;j++)
        p[j]=p[j+1];
    delete p[this->size-1];
    this->size--;
    this->dimens-=this->grows;
}
Complex* ObArray::getAt()
{
    return p[i];
}
void ObArray::display()
{
    for(int j=0;j<this->size;j++)
        p[j].display();
}
ObArray::~ObArray(){
}
