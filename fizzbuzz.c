#include <stdio.h>

int main(void) {
    int N;
    
    printf("Введите число N: ");
    if (scanf("%d", &N) != 1) {
        printf("n/a");
        return 1;
    }
    printf("\n");

    for (int i = 1; i < N; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0) {
            printf("Fizz");
        }
        else if (i % 5 == 0) {
            printf("Buzz");
        }
        else {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}