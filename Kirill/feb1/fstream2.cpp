#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream f;
    f.open("in2.txt");
    int a;
    f >> a;
    cout << a << endl;
    return 0;
}