/*Escreva uma função em C chamada swap que troque os valores de
duas variáveis inteiras usando ponteiros. Em seguida, escreva um
programa principal que teste essa função.*/

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
