/*Desenvolva uma função em linguagem C que recebe duas strings e
retorna a concatenação delas.*/

#include <stdio.h>
#include <stdlib.h>

char* join(char *str1, char *str2) {

    int size1 = 0;
    int size2 = 0;
    int sizeResult;

    int i, j;
    
    for (int i = 0; str1[i] != '\0'; i++) {

        size1 += i;
    }

    for (int i = 0; str2[i] != '\0'; i++) {

        size2 += i;
    }

    sizeResult = size1 + size2;

    char *result = (char*) malloc((sizeResult + 1) * sizeof(char));

    for (i = 0; str1[i] != '\0'; i++) {

        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++, i++) {

        result[i] = str2[j];
    }

    result[i] = '\0';

    return result;
}

int main() {

    char str1[100], str2[100];
    char* result;

    printf("Digite alguma coisa: ");
    scanf("%s", str1);

    printf("Digite outra coisa: ");
    scanf("%s", str2);

    result = join(str1, str2);

    printf("Resultado: %s\n", result);

    free(result);

    return 0;
}