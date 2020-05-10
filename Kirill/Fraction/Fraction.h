#include <iostream>

class Fraction {

private:

    int x, y;

public:

    Fraction(int x = 0, int y = 1) {
        this->x = x;
        this->y = y;
    }

    void show() {
        std::cout << x << "/" << y << std::endl;
    }

    void read() {
        std::scanf("%d/%d", &x, &y);
    }

    const Fraction& operator+ (const Fraction& f2) {
        int denominator = y * f2.y;
        int numenator1 = x * f2.y;
        int numenator2 = f2.x * y;

        Fraction* res = new Fraction(numenator1 + numenator2, denominator);

        std::cout << "const Fraction& operator+" << std::endl;
        std::cout << "this address: " << this << std::endl;
        std::cout << "f2 address: " << &f2 << std::endl;
        std::cout << "res address: " << res << std::endl;

        return *res;
    }

    const bool operator< (const Fraction& f2) {
        int numenator1 = x * f2.y;
        int numenator2 = f2.x * y;

        return numenator1 < numenator2;
    }


};