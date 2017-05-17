#include "pulentclass.h"

PulentClass::PulentClass(int value){
  this->a = value;
}

int PulentClass::getValue(){
    return a;
}

int PulentClass::addOne(){
    return a+1;
}
