#include <iostream>

using namespace std;

class Student {
    private:
        char name[51];
        char surname[51];
        int hp;

    public:
        void start_game() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter surname: ";
            cin >> surname;
            hp = 100;
        }

        bool is_alive() {
            /*
            if (hp > 0) return true;
            else return false;
            */
           return hp > 0;
        }

        void show() {
            cout << name << " " << surname << ": HP = " << hp << ". ";
            if (!is_alive()) cout << "Game over.";
            cout << endl;
        }

};

int main() {
    Student s;
    s.start_game();
    s.show();
    return 0;
}