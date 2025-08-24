#include <stdio.h>

int main(void) {
    int array[5], soma = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        soma += array[i];
    }
    printf("%d\n", soma);
}