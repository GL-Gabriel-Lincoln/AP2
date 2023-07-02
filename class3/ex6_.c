/*Escreva um programa que declare e inicialize uma variável inteira e
um ponteiro para essa variável. Em seguida, multiplique o valor da
variável por 2 usando o ponteiro e imprima o novo valor no terminal.*/

#include <stdio.h>

int main() {
    int number = 1;
    int *pointer = &number;
    
    *pointer = *pointer * 2;

    printf("Novo valor: %d\n", number);

    return 0;
}