#include <stdio.h>


int main() {
    int a[128], c = 1, i = 0, x = 0, y= 0;
    while (c == 1){
        printf("Introdueix un nombre: ");
        scanf("%d", &a[i]);
        printf("Continuar (1/0): ");
        scanf("%d", &c);
        // if (c == 1) i++;
        i++;
    }
    for (int j = 0; j<i; j++){
        x+= a[j];
    }
    printf("Num de nombres: %d ", i);
    printf("Sum: %d ", x);
    printf("Mitja: %lf", (float) x/ (float) i);
    return 0;
}