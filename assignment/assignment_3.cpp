#include<iostream>
#include<cstdio>

int matrix[7][7];
int transpose_matrix[7][7];

int diagonalSum() {
    int sum = 0;
    bool done = false;
    int i = 1, j = 1;

    while (!done) {
        sum += matrix[i][j];
        i++, j++;

        if (i > 6 || j > 6) {
            done = true;
        }
    }

    done = false;
    i = 6, j = 6;

    while (!done) {
        sum += matrix[i][j];
        i--, j--;

        if (i <= 0 || j <= 0) {
            done = true;
        }
    }

    return sum;
}

void matrixTranspose() {
    int ii = 1, jj = 1;

    for (int j = 1; j <= 6; j++) {
        for (int i = 1; i <= 6; i++) {
            transpose_matrix[ii][jj] = matrix[i][j];
            jj++;
        }

        ii++, jj = 1;
    }
}

int main() {
    // input the 6x6 matrix
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            scanf ("%d", &matrix[i][j]);
        }
    }
    
    // print original matrix
    printf("Original matrix:\n");
    for(int i = 1; i<=6; i++){
        for(int j = 1; j<=6; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // print diagonal sum
    int diagonal_sum = diagonalSum();
    printf ("Diagonal sum: %d\n\n", diagonal_sum);
    
    // print the transpose matrix
    matrixTranspose();
    printf("Transpose Matricx:\n");
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            printf ("%d ", transpose_matrix[i][j]);
        }

        printf ("\n");
    }

    return 0;
}
