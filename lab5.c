#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    system("chcp 65001");
    double A[ROWS][COLS] = {
        {1.5, -2.3, 4.0, 0.0},
        {-1.7, 3.2, 5.1, -8.4},
        {0.5, 2.7, -3.1, 6.9}
    };
    
    printf("Матриця A:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < ROWS; i++) {
        int positive_count = 0;
        for (int j = 0; j < COLS; j++) {
            if (A[i][j] > 0) {
                positive_count++;
            }
        }
        printf("Рядок %d містить %d додатніх елементів.\n", i + 1, positive_count);
    }
    
    return 0;
}
