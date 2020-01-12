#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream i;
    ofstream o;
    i.open("input.txt");
    o.open("output.txt", ios::trunc);
    int x;
    while (!i.eof()) {
        i >> x;
        //i.read??
        o << x << " ";
    }
}