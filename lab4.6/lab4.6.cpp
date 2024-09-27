#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, S;
    int k, n;

    // 1. Обчислення за допомогою while
    P = 1.0;
    k = 1;
    while (k <= 20) {
        S = 1.0;
        n = 1;
        while (n <= 25 - k) {
            S *= (static_cast<double>(k - n) / (k + n + 1));
            n++;
        }
        P *= S;
        k++;
    }
    cout << "Result (while): " << P << endl;

    // 2. Обчислення за допомогою do-while
    P = 1.0;
    k = 1;
    do {
        S = 1.0;
        n = 1;
        do {
            S *= (static_cast<double>(k - n) / (k + n + 1));
            n++;
        } while (n <= 25 - k);
        P *= S;
        k++;
    } while (k <= 20);
    cout << "Result (do-while): " << P << endl;

    // 3. Обчислення за допомогою for (наростання)
    P = 1.0;
    for (k = 1; k <= 20; k++) {
        S = 1.0;
        for (n = 1; n <= 25 - k; n++) {
            S *= (static_cast<double>(k - n) / (k + n + 1));
        }
        P *= S;
    }
    cout << "Result (for, up): " << P << endl;

    // 4. Обчислення за допомогою for (спадання)
    P = 1.0;
    for (k = 20; k >= 1; k--) {
        S = 1.0;
        for (n = 25 - k; n >= 1; n--) {
            S *= (static_cast<double>(k - n) / (k + n + 1));
        }
        P *= S;
    }
    cout << "Result (for, down): " << P << endl;

    return 0;
}
