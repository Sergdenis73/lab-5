#include <stdio.h>

#define N 4  
int main() {
    system("chcp 65001");
    double A[N][N] = {
        {1.5, -2.3, 4.0, 0.0},
        {-1.7, 3.2, 5.1, -8.4},
        {0.5, 2.7, -3.1, 6.9},
        {1.1, -0.8, 2.5, -4.4}
    };
    
    printf("Квадратна матриця A (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < N; i++) {
        int positive_count = 0;
        for (int j = 0; j < N; j++) {
            if (A[i][j] > 0) {
                positive_count++;
            }
        }
        printf("Рядок %d містить %d додатніх елементів.\n", i + 1, positive_count);
    }
    
    return 0;
}