#include <iostream>
#include "../lib/library.h"
#include <cmath>
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}
//int main() {
//    std::cout << "Hello world" << std::endl;
//
//    return 0;
//}