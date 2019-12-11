#include <iostream>

using namespace std;

int summ(int x, int y) {
    return x + y;
}

double summ(double x, double y) {
    return x + y;
}

char* summ(char x, char y) { //необходима доработка
    char* res = new char[3];
    res[0] = x;
    res[1] = y;
    res[2] = '\0';
    return res;
}

int main()
{
    /*
    int a, b;
    cin >> a;
    cin >> b;

    cout << summ(a, b);

    double c, d;
    cin >> c;
    cin >> d;
    
    cout << summ(c, d);
    */
    char f, g;
    cin >> f;
    cin >> g;
    char* concat = summ(f, g);
    cout << concat;
    delete [] concat;
}