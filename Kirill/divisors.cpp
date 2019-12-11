#include <iostream>

using namespace std;

void get_odd_even_dividors(int n, int &odd, int& even);

int main() {
    int odd = 0;
    int even = 0;
    int n;
    cin >> n;
    get_odd_even_dividors(n, odd, even);
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;
    //odd - нечетные
    //even - четные
}

void get_odd_even_dividors(int n, int &odd, int& even) {
    for (int i = 1; i <= n/2; i += 2) {
        if (n % i == 0) {odd++;}
    }

    for (int i = 2; i <= n/2; i += 2) {
        if (n % i == 0) {even++;}
    }

    if (n % 2 == 0)
        even++;
    else odd++;
}