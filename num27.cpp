#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    double arr[] = { 3.5, 7.2, 4.1, 7.2, 2.8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Находим максимальный элемент
    double max = arr[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    // Заменяем максимальный элемент на 0
    arr[index] = 0;


    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
