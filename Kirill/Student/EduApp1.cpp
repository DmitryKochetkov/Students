#include <iostream>

using namespace std;

struct Student {
    char first_name[50];
    char last_name[50];
    unsigned int age;
    unsigned int grade;
    unsigned int mark_count;
    unsigned int* marks;
};

Student read_student();
void print_student(Student person);

int main() {
    int n = 0;
    cin >> n;
    Student* c = new Student[n];
    for (int i = 0; i < n; i++) {
        c[i] = read_student();
    }
    for (int i = 0; i < n; i++) {
        print_student(c[i]);
    }
}

Student read_student() {
    Student res;
    cin >> res.first_name;
    cin >> res.last_name;
    cin >> res.age;
    cin >> res.grade;
    cin >> res.mark_count;
    res.marks = new unsigned int[res.mark_count];
    for (int i = 0; i < res.mark_count; i++) {
        cin >> res.marks[i];
    }
    return res;
}

void print_student(Student person) {
    cout << person.first_name << " ";
    cout << person.last_name << " ";
    cout << person.age << " ";
    cout << person.grade << " ";
    cout << person.mark_count << " ";
    for (int i = 0; i < person.mark_count; i++) {
        cout << person.marks[i] << " ";
    }
}