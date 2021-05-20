#include<stdio.h>
#include<stdbool.h>

bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0)
        return false;

    int m = *matrixColSize;
    int n = matrixSize;
    int x = 0, y = m - 1;

    while (x < n && y >= 0)
    {
        if (target < matrix[x][y])
            y--;
        else if (target == matrix[x][y])
            return true;
        else
            x++;
    }

    return false;
}

int mian()
{

}