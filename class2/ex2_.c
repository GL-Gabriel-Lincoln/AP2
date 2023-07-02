#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

// Função para verificar se um ano é bissexto
int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 100 == 0) {
        return 0;
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// Função para obter o número de dias em um determinado mês de um ano
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    } else {
        return daysInMonth[month - 1];
    }
}

// Função para calcular a diferença em dias entre duas datas
int calculateDifference(Date date1, Date date2) {
    int days1 = date1.day;
    for (int m = 1; m < date1.month; m++) {
        days1 += getDaysInMonth(m, date1.year);
    }
    int days2 = date2.day;
    for (int m = 1; m < date2.month; m++) {
        days2 += getDaysInMonth(m, date2.year);
    }
    int leapYears1 = date1.year / 4 - date1.year / 100 + date1.year / 400;
    int leapYears2 = date2.year / 4 - date2.year / 100 + date2.year / 400;
    int totalDays1 = date1.year * 365 + leapYears1 + days1;
    int totalDays2 = date2.year * 365 + leapYears2 + days2;
    return totalDays2 - totalDays1;
}

int main() {
    // Definição das datas
    Date date1 = {1, 1, 2022};
    Date date2 = {30, 6, 2023};

    // Cálculo da diferença em dias entre as datas
    int difference = calculateDifference(date1, date2);

    // Impressão da diferença em dias na tela
    printf("Difference in days: %d\n", difference);

    return 0;
}
