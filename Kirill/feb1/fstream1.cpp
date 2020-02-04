#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream f;
    f.open("in.txt", ios::in);
    int a, b;
    f >> a >> b;
    cout << a << " " << b << endl; //TODO: remove this line
    f.close();

    f.open("out.txt", ios::out | ios::trunc);
    f << a + b << " " << a - b << " " << a * b;
    f.close();

    return 0;
}