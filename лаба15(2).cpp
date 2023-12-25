#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2, num3;


    cout << "Введіть три числа: ";
    cin >> num1 >> num2 >> num3;


    if (num1 <= num2 && num1 <= num3) {
        cout << "Найменше число: " << num1 << endl;
    }
    else if (num2 <= num1 && num2 <= num3) {
        cout << "Найменше число: " << num2 << endl;
    }
    else {
        cout << "Найменше число: " << num3 << endl;
    }

    return 0;
}