#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int PGCD(int a, int b) {
    int i, j = 0, max, c = 0;
    int T[10];

    for (i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0) {
            T[j] = i;
            j++;
            c++;
        }
    }

    max = T[0];
    for (i = 1; i < c; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }

    return max;
}

int main() {
    int a, b, res;
    printf("saisir le 1ere nombre : ");
    scanf("%d", &a);
    printf("saisir le 2eme nombre : "); 
    scanf("%d", &b);
    res = PGCD(a, b);
    printf("res = %d", res);
    return 0;
}
