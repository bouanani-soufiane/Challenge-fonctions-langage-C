#include <stdio.h>

void Permuter(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x, y;

    printf("Entrez la valeur de x : ");
    scanf("%f", &x);

    printf("Entrez la valeur de y : ");
    scanf("%f", &y);

    printf("Avant permutation : x = %.2f, y = %.2f\n", x, y);

    Permuter(&x, &y);

    printf("Apres permutation : x = %.2f, y = %.2f\n", x, y);

    return 0;
}
