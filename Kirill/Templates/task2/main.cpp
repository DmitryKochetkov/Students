#include <iostream>

using namespace std;

template <typename T>
class MyArray {

    private:

    int size;
    T* arr;

    public:

    MyArray<T>() {
        size = 0;
        arr = new T[size];
    }

    
    MyArray<T>(int length) {
        size = length;
        arr = new T[size];
    }

    ~MyArray<T>() {
        delete [] arr;
    }

    // MyArray(const MyArray<T> &m) {

    // }

    void Insert(T a) {
        
    }

    void Reverse() {

    }

    void Output() {

    }
};

int main() {
    MyArray<int> integers = MyArray<int>();
    MyArray<char> chars = MyArray<char>();
    MyArray<double> doubles = MyArray<double>();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        integers.Insert(x);
    }

    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        chars.Insert(x);
    }

    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        doubles.Insert(x);
    }

    integers.Reverse();
    chars.Reverse();
    doubles.Reverse();

    //Output для каждого

    return 0;
}