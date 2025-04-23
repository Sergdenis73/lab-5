#include <stdio.h>
#include <limits.h>

#define M 3
#define N 4 

int main() {
    system("chcp 65001");
    double C[M][N] = {
        {1.5, -2.3, 4.0, 0.0},
        {-1.7, 3.2, 5.1, -8.4},
        {0.5, 2.7, -3.1, 6.9}
    };
    
    double B[M];
    
    for (int i = 0; i < M; i++) {
        double max = C[i][0];
        for (int j = 1; j < N; j+=1) {
            if (C[i][j] > max) {
                max = C[i][j];
            }
        }
        B[i] = max;
    }
    
    printf("Матриця C[%d×%d]:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", C[i][j]);
        }
        printf("\n");
    }
    
    printf("\nМасив B з максимальних значень кожного рядка:\n");
    for (int i = 0; i < M; i++) {
        printf("Рядок %d: %6.2f\n", i+1, B[i]);
    }
    
    return 0;
}