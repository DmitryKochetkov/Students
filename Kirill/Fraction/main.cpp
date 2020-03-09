#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
    Fraction f1;
    f1.read();

    Fraction f2;
    f2.read();
    
    Fraction f3 = f1+f2;
    f3.show();
    return 0;
}