#include <iostream>
#include <cstring>

using namespace std;

class Hotel {
    bool occupied[16];

    public:
    Hotel() {
        occupied[16] = false;
    }
    
    bool is_occupied(int p) {
        return (occupied[p]);
    }

    void free_room(int p) {
        occupied[p] = false;
    }

    int count_free() {
        int res = 0;
        for (int i = 0; i < 16; i++) {
            if (!occupied[i]) res++;
        }
        return res;
    }

    int find_room() {
        for (int i = 0; i < 16; i++)
            if (!occupied[i])
            {
                occupied[i] = true;
                return i;
            }
        return -1;
    }
};

int main() {
    Hotel hotel;
    int m;
    cin >> m;
    char action[10];
    for (int i = 0; i < m; i++) {
        cin >> action;
        if (!strcmp(action, "RESERVE"))
            cout << hotel.find_room() << endl;
        if (!strcmp(action, "FREE")) {
            int p;
            cin >> p;
            hotel.free_room(p);
        }
        if (!strcmp(action, "STATUS"))
            cout << hotel.count_free() << endl;
    }

    return 0;
}