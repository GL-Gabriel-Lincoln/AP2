/*Desenvolva o código de um programa em C onde o usuário informa a
quantidade de alunos e a quantidade de notas de cada aluno. A
partir daí, o usuário irá informar as notas de cada aluno. No final, o
programa deve imprimir quantos alunos foram aprovados e quantos
alunos foram reprovados. O critério de aprovação é a média das
notas de um aluno ser maior ou igual a seis.*/

#include <stdio.h>

int main() {

    int n;
    float note;
    int approved = 0, disapproved = 0;

    printf("Digite quantos alunos tem: ");
    scanf("%d", &n);

    printf("Digite a nota dos alunos\n");

    for(int i = 1; i <= n; i++) {
        
        printf("Aluno %d: \n", i);
        scanf("%f", &note);
        
        if(note >= 6) {

            approved++;    
        }
        else if (note < 6){

            disapproved++;
        }
    }
    
    printf("Alunos aprovados: %d\n", approved);
    printf("Alunos reprovados: %d\n", disapproved);

    return 0;
}