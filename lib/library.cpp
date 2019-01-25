#include "library.h"

#include <iostream>
#include <cmath>

double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}
void hello(std::ostream &out) {
    out << "Hello world";
}