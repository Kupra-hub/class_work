#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "������� ������ �������: ";
    cin >> n;

    // ������� ��������� ������
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
    // ��������� ���������� � ��������
    int i = 0, j = 0;  
    int k = 1;          

    while (k <= n * n) {
        // ���� ������
        while (j < n && matrix[i][j] == 0) {
            matrix[i][j++] = k++;
        }
        j--; i++;

        // ���� ����
        while (i < n && matrix[i][j] == 0) {
            matrix[i++][j] = k++;
        }
        i--; j--;

        // ���� �����
        while (j >= 0 && matrix[i][j] == 0) {
            matrix[i][j--] = k++;
        }
        j++; i--;

        // ���� �����
        while (i >= 0 && matrix[i][j] == 0) {
            matrix[i--][j] = k++;
        }
        i++; j++;
    }

    cout << "������� �������� " << n << "x" << n << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
