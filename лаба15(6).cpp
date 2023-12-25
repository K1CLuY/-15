#include <iostream> //Підключаємо директиву вводу та виводу

#define SIZE 4 //Зазначаємо константу

using namespace std; //Використовуємо простір імен std

int main() {
    setlocale(LC_ALL, "rus");
    int numbers[SIZE]; //створюємо масив

    cout << "Введіть 4 числа: "; //виводимо повідомлення
    for (int i = 0; i < SIZE; i++) { //цикл для введення даних
        cin >> numbers[i]; //введення даних
    }

    int minValue = numbers[0]; //задання змінної
    int maxValue = numbers[0]; //задання змінної

    for (int i = 1; i < SIZE; i++) { //цикл для перевірки значень
        if (numbers[i] < minValue) { //логічна умова
            minValue = numbers[i]; //мова якщо виконується
        }
        if (numbers[i] > maxValue) { //логічна умова
            maxValue = numbers[i]; //мова якщо виконується
        }
    }

    cout << "Мінімальне значення: " << minValue << " Максимальне значення: " << maxValue; // Виведення результату

    return 0; //логічний кінець
}
