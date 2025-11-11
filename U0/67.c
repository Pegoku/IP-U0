#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define VIDES 8

int checkForMatch(char * base, char * sol, char in){
    int match = 0;
    for (int i = 0; i < strlen(sol); i++){
        if (sol[i] == in && sol[i] != base[i]){
            base[i] = in;
        match = 1;
        }
    }

    if (match){
        return 1;
    } else{
        return 0;
    }

}

void printStr(char * in){
    for (int i = 0; i< strlen(in); i++){
        printf("%c ", in[i]);
    }
    printf("\n");
}


int main() {
    int a, b, c, v = VIDES;
    char d[128], e[128], f; // base, sol
    char paraulesOcultes[20][20] = {"elefant", "tortuga", "programa", "ordinador", "senyera", "montanya", "platja", "estacio", "hospital", "biblioteca", "restaurant", "farmacia", "cinema", "teatre", "museu", "iglesia", "castell", "paisatge", "flor", "arbre"};

    // printf("Introdueix una paraula\n");
    // scanf("%s", e);

    srand(time(NULL));
    strcpy(e,  paraulesOcultes[rand()%19]);    
    for (int i = 0; i < strlen(e); i++){
        d[i] = '_';
    }
    for (int i = 0; i < strlen(d); i++){
        printf("%c ", d[i]);
    }
    printf("\n");

    while (strcmp(d, e) != 0 && v != 0){
        // fflush(stdin);
        printf("Vides: %d\n", v);
        printf("Prova una lletra: ");
        // scanf("%c", &f)
        // while (getchar() != '\n');
        scanf("%c", &f);
        // printf("%c char\n", f);
        if (!checkForMatch(d, e, f)){
            v--;
        }
        printStr(d);
    }
    if (v == 0){
        printf("Has perdut");
        printf("La paraula era %s", c);
    }
    else{
        printf("Has guanyat!");
    }

    return 0;
}