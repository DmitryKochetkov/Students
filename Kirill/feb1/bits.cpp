#include <iostream>
#include <fstream>

using namespace std;

int main() {
    for (int i = 0; i < 6; i++)
    cout << (1L << i) << endl;

    fstream f;

    return 0;
}