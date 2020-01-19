#include <iostream>

using namespace std;

class Time {
    int h;
    int m;
    int s;
    
    public:
    Time() {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int h, int m, int s = 0) {
        this->h = h;
        this->m = m;
        this->s = s;
    }

    void add_seconds(int x) {
        if (x > 0)
        {
            s += x;
            while (s >= 60) {
                s -= 60;
                m++;
            }
            while (m >= 60) {
                m -= 60;
                h++;
            }
            while (h >= 24) {
                h -= 24;
            }
        }
        else {
            s += x;
            while (s < 0) {
                s += 60;
                m--;
            }
            while (m < 0) {
                m += 60;
                h--;
            }
            while (h < 0) {
                h += 24;
            }
        }
    }

    void show() {
        printf("%02d:%02d:%02d\n", h, m, s);
    }
};

int main() {
    int p;
    int hours;
    int minutes;
    int seconds;
    Time time;
    int t;

    cin >> p;
    cin >> hours;
    cin >> minutes;
    cin >> seconds;

    if (p == 0)
    time = Time();

    if (p == 2)
    time = Time(hours, minutes);

    if (p == 3)
    time = Time(hours, minutes, seconds);

    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        time.add_seconds(a);
        time.show();
    }

    return 0;
}