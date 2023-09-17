#include <stdio.h>

int max2(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int max4(int a, int b, int c, int d){
    int maximum1 = max2(a,b);
    int maximum2 = max2(c,d);
  
        return max2(maximum1,maximum2);
}
int main() {
    int a, b, c , d;
    printf("saisir le 1ere nombre : ");
    scanf("%d",&a);
    printf("saisir le 2eme nombre : ");
    scanf("%d",&b);
    printf("saisir le 3eme nombre : ");
    scanf("%d",&c);
    printf("saisir le 4eme nombre : ");
    scanf("%d",&d);
    max4(a,b,c,d);
    return 0;
}

