#include <iostream>
#include <time.h>

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
    clock_t start_time = clock();
    for (int i = 1; i <= n; i += 2) {
        if (n % i == 0) {odd++;}
    }

    for (int i = 2; i <= n; i += 2) {
        if (n % i == 0) {even++;}
    }
    clock_t end_time = clock();
    cout << "Time 1: " << (double)(end_time - start_time) / (double)CLOCKS_PER_SEC << endl;

    start_time = clock();
    for (int i = 1; i <= n/2; i += 2) {
        if (n % i == 0) {odd++;}
    }

    for (int i = 2; i <= n/2; i += 2) {
        if (n % i == 0) {even++;}
    }
    end_time = clock();
    cout << "Time 2: " << (double)(end_time - start_time) / (double)CLOCKS_PER_SEC << endl;

    if (n % 2 == 0)
        even++;
    else odd++;
}