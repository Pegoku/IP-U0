#include <stdio.h>

int main() {
    int c;
    double d;
    printf("Conversor d'unitats. Tria una opció:\n\
    (1) cm a polzada\n\
    (2) polzada a cm\n");

    scanf("%d", &c);
    printf("Introdueix el nombre a convertir: ");
    scanf("%lf", &d);
    if (c==1){
       printf("%lf in", d/2.54); 
    }
    if (c==2){
       printf("%lf cm", d*2.54); 
    }
    return 0;

}