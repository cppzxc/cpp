#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    string suits[] = { "пикми", "трефы", "бубны", "червы" };

    if (m >= 1 && m <= 4) {
        cout << suits[m - 1];
    }
    else {
        cout << "неверный номер масти";
    }

    return 0;
}