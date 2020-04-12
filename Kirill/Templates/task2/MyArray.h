template <typename T>
class MyArray {

    private:

    int size;
    T* arr;

    public:

    MyArray<T>();
    MyArray<T>(int length);
    // MyArray(const MyArray<T> &m);

    ~MyArray<T>();
};