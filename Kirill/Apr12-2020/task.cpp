#include <iostream>

class Student {
private:
    std::string name;
    int age;
    std::string phone_number;

public:
    Student() {

    }

    Student(std::string name, int age, std::string phone_number) {
        this->name = name;
        this->age = age;
        this->phone_number = phone_number;
    }

    int getAge() {
        return age;
    }

    std::string getName() {
        return name;
    }
};

int main() {
    int n;
    std::cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        std::string _name;
        int _age;
        std::string _phone_number;

        std::cin >> _name;
        std::cin >> _age;
        std::cin >> _phone_number;

        students[i] = Student(_name, _age, _phone_number);
    }

    int R;
    std::cin >> R;

    for (int i = 0; i < n; i++) {
        if (students[i].getAge() > R)
            std::cout << students[i].getName() << std::endl;
    }

    return 0;
}