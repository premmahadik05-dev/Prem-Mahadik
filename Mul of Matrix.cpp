#include <stdio.h>

int main() {
    int a[3][3], b[3][3], mul[3][3];
    int i, j, k;

    printf("Enter first matrix (3x3):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix (3x3):\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &b[i][j]);

    // Multiply
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            mul[i][j] = 0;
            for(k=0; k<3; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

