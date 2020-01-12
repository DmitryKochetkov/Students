#include <iostream>
#include <iomanip>

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
double get_student_avg_mark(Student person);
int age_enterance(Student s);

int main() {
    int n = 0;
    cin >> n;
    Student* c = new Student[n];
    for (int i = 0; i < n; i++) {
        c[i] = read_student();
    }
    for (int i = 0; i < n; i++) {
        //cout << get_student_avg_mark(c[i]) << endl;
        //cout << fixed << setprecision(4) << get_student_avg_mark(c[i]) << endl;
        cout << age_enterance(c[i]) << endl;
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

double get_student_avg_mark(Student person) {
    double avg_mark;
    for (int i = 0; i < person.mark_count; i++) {
        avg_mark += (double)person.marks[i];
    }
    avg_mark /= (double) person.mark_count;
    return avg_mark;
}

int age_enterance(Student s) {
    return s.age - s.grade + 1;
}