#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance_ptr(Point A,Point B){
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

int main()
{
    double r = 0;
    int n;
    cin >> n;
    Point A, B;

    cin >> A.x;
    cin >> A.y;

    for (int i = 1; i < n; i++) 
    {
        cin >> B.x;
        cin >> B.y;
        r += distance_ptr(A, B);
        A = B; //question
    }

    cout << fixed << setprecision(4) << r;
}