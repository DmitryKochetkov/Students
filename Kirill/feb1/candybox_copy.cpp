#include <iostream>

using namespace std;

class CandyBox {
    int cnt;
    int* candies;

    public:
    CandyBox() {}
    ~CandyBox() {delete[] candies;}

    CandyBox(const CandyBox &candyBox) {
        this->cnt = candyBox.cnt;
        this->candies = new int[cnt];
        for (int i = 0; i < cnt; i++)
            this->candies[i] = candyBox.candies[i];
    }

    void read() {
        cin >> cnt;
        candies = new int[cnt];
        for (int i = 0; i < cnt; i++) {
            cin >> candies[i];
        }
    }

    void print() {
        for (int i = 0; i < cnt; i++) {
            cout << candies[i] << " ";
        }
        cout << endl;
    }

    int size() {return cnt;}

    int& at(int index) {
        return candies[index];
    }

    int varities() {
        int buffer = -1;
        int count = 0;

        int* copy = new int[cnt];
        for (int i = 0; i < cnt; i++)
            copy[i] = candies[i];

        //TODO: sort
        for (int i = 0; i < cnt; i++)
            for (int j = 0; j < cnt-1; j++) {
                if (copy[j] > copy[j+1]) {
                    int temp = copy[j];
                    copy[j] = copy[j+1];
                    copy[j+1] = temp;
                }
            }

        for (int i = 0; i < cnt; i++) {
            if (copy[i] > buffer) {
                count++;
                buffer = copy[i];
            }
        }

        delete[] copy;
        return count;
    }

    int count(int x){
        int res =0;
        for(int i = 0 ;i <cnt;i++)
        if(candies[i]== x)
        res++;
        return res;
    }
};



CandyBox Arcady_process(CandyBox b) {
    bool is_second = false;

    int capacity = 0; //or how do we call it
    int* not_eaten = new int[b.size()]; //better b.size()/2?

    for (int i = 0; i < b.size(); i++) {
        not_eaten[i] = -1;
    }

    for (int i = 0; i < b.size(); i++) {
        if (b.at(i) % 2 == 0) {
            if (!is_second)
            {
                not_eaten[capacity] = b.at(i);
                capacity++;
            }
            b.at(i) = 0;
            is_second = !is_second;
        }
    }

    // cout << endl << "Not eaten:" << endl;
    // for (int i = 0; i < capacity; i++) {
    //     cout << not_eaten[i] << " ";
    // }

    // cout << "END" << endl;

    int counter = 0;

    for (int i = 0; i < b.size(); i++) {
        //If not_eaten would be a queue, we could just pop it. But now we have to index it with this pretty counter.

        if (counter < capacity && b.at(i) == 0)
            b.at(i) = not_eaten[counter++];
    }

    delete[] not_eaten;

    return b;
}

CandyBox Alice_process(CandyBox b) {
    for (int i = 0; i < b.size() / 2; i++) {
        b.at(i) = 0;
    }

    for (int i = b.size() / 2; i < b.size(); i++) {
        int temp = b.at(i); //swap elements 0-4 2-5 4-6 6-7... firsly I thought about i*2-b.size()+1
        b.at(i) = b.at(2*(i-b.size()/2));
        b.at(2*(i-b.size()/2)) = temp;

        cout << "swap: " << 2*(i-b.size()/2) << "-" << i << endl;
    }
    return b;
}

int count_afterwards(CandyBox b, int x) {
    return Arcady_process(b).count(x) + Alice_process(b).count(x);
}

int main() {
    CandyBox candyBox = CandyBox();
    candyBox.read();
    // cout << endl << "Varities:" << endl;
    // cout << candyBox.varities() << endl;

    // cout << endl << "Arcady_process:" << endl;
    // Arcady_process(candyBox).print();

    // cout << endl << "Alice_process:" << endl;
    // Alice_process(candyBox).print();

    int x;
    cin >> x;

    cout << count_afterwards(candyBox, x) << endl;
    return 0;
}