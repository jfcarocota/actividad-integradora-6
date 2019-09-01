#include<iostream>

#define N 4
#define M 5

int SumMatrix(int matrix[N][M], int x, int n, int y, int m)
{
    if (n == 1 && m == 1) {
        return matrix[x][y];
    }
    if (n == 1) {
        return SumMatrix(matrix, x, n, y, (m / 2)) + SumMatrix(matrix, x, n, y + (m / 2), m - (m / 2));
    } else {
        return SumMatrix(matrix, x, (n / 2), y, m) + SumMatrix(matrix, x + (n / 2), n - (n / 2), y, m);
    }
    return 0;
}

int main()
{
    int matrix[N][M] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
    };

    std::cout << "Suma de matriz: " << SumMatrix(matrix, 0, N, 0, M) << std::endl;

    std::getchar();
    return 0;
}
