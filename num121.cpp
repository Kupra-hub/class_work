#include <iostream>
#include <vector>

using namespace std;

// Функция для вывода матрицы
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Rus");
    // Размерность матрицы
    int n = 4;

    // Создаем вектор для хранения верхней треугольной части
    vector<int> upper_tri(n * (n + 1) / 2);

    // Заполняем вектор последовательными числами
    for (int i = 0; i < upper_tri.size(); i++) {
        upper_tri[i] = i + 1;
    }

    // Создаем симметричную матрицу
    vector<vector<int>> matrix(n, vector<int>(n));

    // Восстанавливаем матрицу
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            matrix[i][j] = upper_tri[k];
            matrix[j][i] = upper_tri[k];
            k++;
        }
    }

    cout << "Восстановленная матрица:\n";
    printMatrix(matrix);

    return 0;
}
