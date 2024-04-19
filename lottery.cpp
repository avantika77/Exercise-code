#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Base class
class Lotto {
private:
    int nums[6];

public:
    // Constructor
    Lotto() {
        srand(time(NULL));
        for (int i = 0; i < 5; i++) {
            nums[i] = (rand() % 69) + 1; // Random number between 1 and 69
        }
        nums[5] = (rand() % 26) + 1; // Random number between 1 and 26
    }
    void getLotto() {
        cout << "Your lottery numbers are: " << endl;
        for (int i = 0; i < 6; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
        cout << "Good Luck!" << endl;
    }
};

int main() {
    Lotto myLotto;
    myLotto.getLotto();
    return 0;
}
