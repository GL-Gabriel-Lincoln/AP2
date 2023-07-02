#include <stdio.h>

typedef struct {
    char name[50];
    char rg[20];
    char cpf[20];
} Person;

typedef struct {
    char accountNumber[20];
    char agency[20];
    float balance;
    Person owner;
} BankAccount;

// Função para imprimir os dados de uma conta bancária
void printBankAccount(BankAccount account) {
    printf("Name: %s\n", account.owner.name);
    printf("Account Number: %s\n", account.accountNumber);
    printf("Balance: %.2f\n", account.balance);
}

int main() {
    BankAccount account;

    // Solicita ao usuário que insira os dados da conta bancária
    printf("Enter your name: ");
    fgets(account.owner.name, sizeof(account.owner.name), stdin);
    printf("Enter your RG: ");
    fgets(account.owner.rg, sizeof(account.owner.rg), stdin);
    printf("Enter your CPF: ");
    fgets(account.owner.cpf, sizeof(account.owner.cpf), stdin);
    printf("Enter your account number: ");
    fgets(account.accountNumber, sizeof(account.accountNumber), stdin);
    printf("Enter your agency: ");
    fgets(account.agency, sizeof(account.agency), stdin);
    printf("Enter your balance: ");
    scanf("%f", &account.balance);

    printf("\n");

    // Imprime os dados da conta bancária
    printBankAccount(account);

    return 0;
}
