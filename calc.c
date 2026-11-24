#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int dif(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

double div(int a, int b) {
    return (double)a / b;
}

int main(void) {
    int a, b;
    char op;

    double result;

    printf("Введите ниже два числа и между ними операцию (+, -, *, /) через пробел:\n");
    if (scanf("%d %c %d", &a, &op, &b) != 3) {
        printf("n/a");
        return 1;
    }

    switch (op) {
        case '+':
            result = sum(a, b);
            break;
        case '-':
            result = dif(a, b);
            break;
        case '*':
            result = mul(a, b);
            break;
        case '/':
            if (b == 0) {
                printf("На ноль делить нельзя!\n");
                return 1;
            }
            else {
                result = div(a, b);
                break;
            }
        default:
            printf("n/a\n");
            return 1;
    }

    printf("Результат: %g\n", result);

    return 0;
}