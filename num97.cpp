#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите размер матрицы: ";
    cin >> n;

    // Создаем двумерный массив
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    // начальные координаты и значение
    int i = 0, j = 0;  
    int k = 1;          

    while (k <= n * n) {
        // Идем вправо
        while (j < n && matrix[i][j] == 0) {
            matrix[i][j++] = k++;
        }
        j--; i++;

        // Идем вниз
        while (i < n && matrix[i][j] == 0) {
            matrix[i++][j] = k++;
        }
        i--; j--;

        // Идем влево
        while (j >= 0 && matrix[i][j] == 0) {
            matrix[i][j--] = k++;
        }
        j++; i--;

        // Идем вверх
        while (i >= 0 && matrix[i][j] == 0) {
            matrix[i--][j] = k++;
        }
        i++; j++;
    }

    cout << "Матрица размером " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
