/*Escreva um programa em C que declare uma estrutura chamada
s_person com campos para nome, e-mail e idade. Crie um tipo
baseado nessa estrutura chamado Person. Em seguida, crie uma
variável deste tipo. Declare também um ponteiro para essa variável e
atribua valores aos campos usando o ponteiro. Imprima os valores da
estrutura usando o ponteiro.*/

#include <stdio.h>

struct s_person {

    char name[100];
    char email[100];
    int age;
};

typedef struct s_person Person;

void copyString(char* destiny, char* origin) {
    
    int i;
    
    for (i = 0; origin[i] != '\0'; i++) {
        
        destiny[i] = origin[i];
    }

    destiny[i] = '\0';
}

int main() {

    Person person;

    Person *point = &person;

    copyString(point->name, "John");
    copyString(point->email, "john@example.com");
    
    point->age = 12;

    printf("Name: %s\n", point->name);
    printf("Email: %s\n", point->email);
    printf("Age: %d\n", point->age);

    return 0;
}
