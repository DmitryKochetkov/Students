#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;   
};

std::ostream& operator<<(std::ostream& out, const Point &point) {
        out << fixed << setprecision(4) << "x = " << point.x << ", y = " << point.y;
        return out;
}

double distance_ptr(Point A,Point B){
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

int main()
{
    Point A, B;
    cin >> A.x;
    cin >> A.y;

    cin >> B.x;
    cin >> B.y;

    cout << "Point A: " << A << endl;
    cout << "Point B: " << B << endl;
    cout << fixed << setprecision(6) << "Distance: " << distance_ptr(A, B);
}