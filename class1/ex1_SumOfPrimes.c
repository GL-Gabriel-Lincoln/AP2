/*Desenvolva um procedimento em linguagem C que recebe um vetor 𝒗
de tamanho 𝒏 de inteiros e imprime na tela a soma de todos os
elementos primos.*/

#include <stdio.h>

int isPrime(int n) {

    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

void printSumOfPrimes(int vector[], int size) {
    
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        if (isPrime(vector[i])) {
            sum += vector[i];
        }
    }
    
    printf("A soma dos números primos é: %d\n", sum);
}

int main() {
    int size;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);
    
    int vector[size];
    
    printf("Digite os números do vetor:\n");
    for (int i = 0; i < size; i++) {
        printf("Numéro %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    printSumOfPrimes(vector, size);
    
    return 0;
}
