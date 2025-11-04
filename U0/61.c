#include <stdio.h>
#include <ctype.h>

int isNum(int num){
    return num * num;
}

int main() {
    char c;
    printf("Introdueix un caracter: ");
    scanf("%c", &c);

    if (!isdigit(c)) printf("no ");    
    printf("es un digit");

    return 0;
}