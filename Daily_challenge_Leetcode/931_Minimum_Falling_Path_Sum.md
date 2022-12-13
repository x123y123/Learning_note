# 931. Minimum Falling Path Sum (C)
## Question
* Given an `n*n` array of integers `matrix`, return the minimum sum of any falling path through `matrix`.
* A falling path starts at any element in the first row and chooses the element in the next row that is either directly below or diagonally left/right.
* Specifically, the next element from position `(row, col)` will be `(row + 1, col - 1)`, `(row + 1, col)`, or`(row + 1, col + 1)`.

## Example
* example_1
```html
Input: matrix = {[2, 1, 3], [6, 5, 4], [7, 8, 9]}
Output: 13
```
* example_2
```html
Input: matrix = {[-19, 57], [-40, -5]}
Output: -59
```
## Constraints
* n == matrix.length == matrix[i].length
* 1 <= n <= 100
* -100 <= matrix[i][j] <= 100

## Solve
1. check if matrix length is 1, than return the only one value.
2. begine from second last row and keep adding minimum sum.

```c
int minFallingPathSum(int **matrix, int matrixSize, int *matrixColSize) {
    int ans = 0;
    if (matrixSize == 1)
        return **matrix;

    // i: row, j: col
    for (int i = matrix - 2; i >= 0; i--) {
        for (int j = 0; j < matrixSize; j++) {
            int tmp = matrix[i + 1][j];
            
            if (j > 0)
                tmp = tmp < matrix[i + 1][j - 1] ? tmp : matrix[i + 1][j - 1];
            if (j + 1 < matrixSize)
                tmp = tmp < matrix[i + 1][j + 1] ? tmp : matrix[i + 1][j + 1];
            matrix[i][j] = matrix[i][j] + tmp;
        }
    }

    // check the highest row
    ans = INT_MAX;
    for (int i = 0; i < matrixSize; i++)
        ans = ans < matrix[0][i] ? tmp : matrix[0][i];
    return ans;
}
```
