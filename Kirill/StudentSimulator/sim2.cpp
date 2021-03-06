#include <iostream>

using namespace std;

class Student {
    private:
        char name[51];
        char surname[51];
        int hp;
        int energy;

        void change_field(int &field, int delta) {
            field += delta;
            if (field > 100) field = 100;
            if (field < 0) field = 0;
        }

    public:
        void start_game() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter surname: ";
            cin >> surname;
            hp = 100;
            energy = 100;
        }

        bool is_alive() {
           return hp > 0;
        }

        void show() {
            cout << name << " " << surname << ": HP = " << hp << ", Energy: " << energy << ". ";
            if (!is_alive()) cout << "Game over.";
            cout << endl;
        }

        void eat() {
            if (is_alive()) {
                change_field(energy, 7);
                change_field(hp, 1);
            }
        }

        void wait() {
            if (is_alive()) {
                change_field(energy, -3);
                change_field(hp, 1);
            }
        }

};

int main() {
    Student s;
    s.start_game();
    s.show();

    s.wait();
    s.wait();
    s.wait();
    s.wait();
    s.wait();
    s.eat();
    s.wait();

    s.show();
    return 0;
}