#include <iostream>

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;


};

class Rectangle: public Figure {
private:
    double a;
    double b;

public:
    Rectangle(double a, double b) {
        this->a = a;
        this->b = b;
    }

    double area() override {
        return a*b;
    }

    double perimeter() override {
        return 2*(a+b);
    }
};

class Circle: public Figure {
private:
    double r;

public:
    Circle(double r) {
        this->r = r;
    }

    double area() override {
        return 3.14*r*r;
    }

    double perimeter() override {
        return 3.14*2*r;
    }
};

double array_area(Figure** array, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += array[i]->area();
    }
    return s;
}

double array_perimeter(Figure** array, int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        s += array[i]->perimeter();
    }
    return s;
}

int main() {
    int n;
    std::cin >> n;
    Figure* figures[n];

    for (int i = 0; i < n; i++) {
        std::string name;
        std::cin >> name;
        if (name == "Rectangle") {
            int a, b;
            std::cin >> a;
            std::cin >> b;
            figures[i] = new Rectangle(a, b);
        }
        else if (name == "Circle") {
            int r;
            std::cin >> r;
            figures[i] = new Circle(r);
        }
    }

    std::cout << "Summary area: " << array_area(figures, n) << std::endl;
    std::cout << "Summary perimeter: " << array_perimeter(figures, n) << std::endl;

    return 0;
}