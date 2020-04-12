#include <iostream>

class Point {

    public:

    int size;
    double* coord;


    Point(int size, double* coord) {
        this->size = size;
        this->coord = new double[size];
        for (int i = 0; i < size; i++) {
            this->coord[i] = coord[i];
        }
    }

    void print() {
        for (int i = 0; i < size; i++)
            std::cout << "coord[" << i << "] = " << coord[i] << std::endl;
    }

    void setCoord(int id, double value) {
        this->coord[id] = value;
    }

    Point(const Point& point) {
        this->size = point.size;
        this->coord = new double[size];
        for (int i = 0; i < size; i++) {
            this->coord[i] = point.coord[i];
        }
        std::cout << "Copy constructor called" << std::endl;
    }
};

int main() {
    double* my_coord = new double[4];
    my_coord[0] = 1.0;
    my_coord[1] = 2.0;
    my_coord[2] = 3.0;
    my_coord[3] = 4.0;
    Point a(4, my_coord);
    

    printf("Point A (%d): \n", &a);
    a.print();

    Point b(a);
    a.setCoord(2, 100.0);

    std::cout << std::endl;
    printf("Point A (%d): \n", &a);
    a.print();

    std::cout << std::endl;
    printf("Point B (%d): \n", &b);
    b.print();

    return 0;
}