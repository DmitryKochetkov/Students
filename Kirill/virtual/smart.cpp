#include <iostream>
#include <memory>

int main() {

    std::unique_ptr<int> p(new int(5));

    std::unique_ptr<int> p1 = p;

    return 0;
}