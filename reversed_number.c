#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("Введите число: ");

    if (scanf("%d", &n) != 1) {
        printf("Неверный ввод!");
        return 1;
    }

    while (n > 0) {
        int d = n % 10;
        printf("%d", d);
        sum += d;
        n = n / 10;
    }

    printf("\nСумма цифр: %d\n", sum);

    return 0;
}