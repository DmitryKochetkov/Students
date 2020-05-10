#include <iostream>
#include "Fraction.h"

using namespace std;

template <class T>
T my_max(T a, T b) {
    if (a < b)
        return b;
    else return a;
}

int main() {
    std::string type;
    std::cin >> type;

    if (type == "INT") {
        int i1, i2;
        std::cin >> i1;
        std::cin >> i2;
        std::cout << my_max(i1, i2) << std::endl;
    }

    if (type == "CHAR") {
        char c1, c2;
        std::cin >> c1;
        std::cin >> c2;
        std::cout << my_max(c1, c2) << std::endl;
    }

    if (type == "FRACTION") {
        Fraction f1;
        f1.read();

        Fraction f2;
        f2.read();
        my_max(f1, f2).show();
    }

    // Fraction f3 = f1+f2;
    // f3.show();
    return 0;
}