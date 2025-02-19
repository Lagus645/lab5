#include <iostream>
#include <clocale>
#include <ctime>
#include <stdlib.h>
using namespace std;
// Функция для вычисления суммы элементов ниже главной диагонали
int sumUndDiagonal(int matr[][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            sum += matr[i][j];
        }
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "russian");
    srand(time(0));
    const int n = 4;
    const int m = 3;
    int matr1[100][100];
    int matr2[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matr1[i][j] = rand() % 100 - 50;
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            matr2[i][j] = rand() % 100 - 50;
        }
    }
    cout << "Матрицы: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Сумма под главной диагональю: " << sumUndDiagonal(matr1, n) + sumUndDiagonal(matr2, m);
    return 0;
}