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
void add_mark(Student &s, int mark);

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
        while (get_student_avg_mark(c[i]) < double(4.5)) {
            cout << "Iteration: " << i << ", " << get_student_avg_mark(c[i]) << endl;
            add_mark(c[i], 5);
        }
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
    cout << person.mark_count << endl;
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

void add_mark(Student &s, int mark) {
    unsigned int* temp = new unsigned int[s.mark_count + 1];
    for (int i = 0; i < s.mark_count; i++) {
        temp[i] = s.marks[i];
    }
    temp[s.mark_count] = mark;
    delete[] s.marks;
    s.marks = temp;
    s.mark_count+=1;
}


/*
void add_mark(Student &s, int mark) { //Where's our exception?
    s.mark_count++;
    s.marks[s.mark_count] = 5;
}
*/