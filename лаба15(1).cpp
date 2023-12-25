#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    if (a > b) {
        cout << " число: " << a << endl;
    }
    else {
        cout << " числа " << a << " та " << b << endl;
    }

    return 0;
}