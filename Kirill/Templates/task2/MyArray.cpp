#include "MyArray.h"

template <typename T>
inline MyArray<T>::MyArray() {
    size = 0;
    arr = new T[size];
}

template <typename T>
inline MyArray<T>::MyArray(int length) {
    size = length;
    arr = new T[size];
}

template <typename T>
inline MyArray<T>::~MyArray() {
    delete [] arr;
}