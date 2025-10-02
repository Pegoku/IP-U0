#include <stdio.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
    return (*(int*)a-*(int*)b);
}


int main() {
    int num[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &num[i]);
    }
   qsort(num, 3, sizeof(int), compare);
   for (int i = 0; i < 3; i++){
    printf("%d ", num[i]);
   }
    
    return 0;
}