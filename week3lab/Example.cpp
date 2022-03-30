#include "Example.H"

Example::Example(double value) {
   this->ptrValue = new double(value);
}
//example class is missing destructor
Example::~Example(){
    delete ptrValue;
}

void Example::setValue(double value) {
    *ptrValue = value;
}

double Example::getValue() {
   return *ptrValue;
}