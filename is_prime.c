#include <stdio.h>
#include <math.h>

int is_prime(long long n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }

    long long limit = (long long)sqrt((double)n);
    for (long long i = 3; i <= limit; i+=2) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}


int main(void) {
    long long n;

    printf("Введите число: ");

    if (scanf("%lld", &n) != 1) {
        printf("Неправильный ввод!\n");
        return 1;
    }

    if (is_prime(n)) {
        printf("Число простое.\n");
    }
    else {
        printf("Число составное.\n");
    }

    return 0;
}