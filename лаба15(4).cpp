#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    cout << "Розмір = 5 : "; // Вивід повідомлення
    const int n = 5; // Оголошення змінної для розміру масиву
    int arr[n]; // Оголошення масиву
    for (int i = 0; i < n; i++) { // Цикл для введення елементів масиву
        cout << "Введіть елемент " << i + 1 << ": "; // Вивід повідомлення
        cin >> arr[i]; // Введення елемента масиву
    }


    int sum = 0;
    for (int i = 0; i < n; i++) { //цикл для обчислення суми елементів масиву
        sum += arr[i];
    }


    cout << "Сума елементів масиву: " << sum << endl;

    return 0;
}