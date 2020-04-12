#include <iostream>

using namespace std;

template <typename T>
T my_max(T a, T b) {
    return a < b ? b : a;
}

// int my_max(int a, int b) {
//     printf("INT\n");
//     return a < b ? b : a;
// }

// double my_max(double a, double b) {
//     printf("DOUBLE\n");
//     return a < b ? b : a;
// }

// string my_max(string a, string b) {
//     printf("STRING\n");
//     return a < b ? b : a;
// }

int main() {
    cout << my_max(2, 3) << endl;
    cout << my_max(2.0, 3.0) << endl;
    cout << my_max('a', 'b') << endl;
    return 0;
}