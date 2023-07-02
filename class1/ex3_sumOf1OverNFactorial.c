/*Desenvolva uma função em linguagem C que recebe um valor inteiro
n e então calcula:
1 + 1/1! + 1/2! + ⋯ + 1/𝑛!*/

#include <stdio.h>
double sum_of_1_over_n_factorial(int n) {

    int factorial = 1;
    double sum = 0;

    for(int i = 1; i <= n; i++) {

        factorial *= i;
        sum += 1.0 / factorial;
    }
        
    return sum;
}

int main() {

    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    
    printf("Resultado da seguinte fórmula: %lf\n", sum_of_1_over_n_factorial(n));

    return 0;
}