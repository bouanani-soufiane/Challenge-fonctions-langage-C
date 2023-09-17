#include <stdio.h>
#include <stdbool.h>

bool estNombreParfait(int n) {
    if (n <= 0) {
        return false; 
        }

    int sommeDiviseurs = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sommeDiviseurs += i;
        }
    }

    return sommeDiviseurs == n;
}

int main() {
    int nombre;

    printf("Entrez un nombre naturel non nul : ");
    scanf("%d", &nombre);

    if (estNombreParfait(nombre)) {
        printf("%d est un nombre parfait.\n", nombre);
    } else {
        printf("%d n'est pas un nombre parfait.\n", nombre);
    }

    return 0;
}
