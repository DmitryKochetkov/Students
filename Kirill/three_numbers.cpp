#include <iostream>

using namespace std;

void swap(int &x, int &y);

void sort_three_numbers(int &a, int &b, int& c);

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    sort_three_numbers(a, b, c);
    cout << a << " " << b << " " << c;
}

void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

void sort_three_numbers(int &a, int &b, int& c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}