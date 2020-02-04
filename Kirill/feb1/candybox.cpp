#include <iostream>

using namespace std;

class CandyBox {
    int cnt;
    int* candies;

    public:
    CandyBox() {}
    ~CandyBox() {}

    void read() {
        cin >> cnt;
        candies = new int[cnt];
        for (int i = 0; i < cnt; i++) {
            cin >> candies[i];
        }
    }

    void print() {
        for (int i = 0; i < cnt; i++) {
            cout << candies[i];
        }
    }

    int varities() {
        int buffer = -1;
        int count = 0;
        //TODO: sort
        for (int i = 0; i < cnt; i++)
            for (int j = 0; j < cnt-1; j++) {
                if (candies[j] > candies[j+1]) {
                    int temp = candies[j];
                    candies[j] = candies[j+1];
                    candies[j+1] = temp;
                }
            }

        for (int i = 0; i < cnt; i++) {
            if (candies[i] > buffer) {
                count++;
                buffer = candies[i];
            }
        }

        return count;
    }
};

int main() {
    CandyBox* candyBox = new CandyBox();
    candyBox->read();
    cout << candyBox->varities() << endl;
    return 0;
}