#include <iostream>

using namespace std;

class Array {
    int length;
    int* arr;

    public:
    Array() {    }
    ~Array() {delete[] arr;}

    Array(const Array &array): length(array.length), arr(new int[length]) {
        for (int i = 0; i < length; i++)
            arr[i] = array.arr[i];
    }

    void read() {
        cin >> length;
        arr = new int[length];
        for (int i = 0; i < length; i++) {
            cin >> arr[i];
        }
    }
};

void do_something(Array buf);

int main() {
    Array* array = new Array();
    array->read();

    cout << "Source address: " << &array << endl;
    do_something(*array);

    return 0;
}

void do_something(Array buf) {
    cout << "Copy address: " << &buf << endl;
}