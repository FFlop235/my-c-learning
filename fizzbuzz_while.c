#include <stdio.h>

int main(void) {
    int N;
    int n = 1;
    
    printf("Введите число N: ");
    if (scanf("%d", &N) != 1) {
        printf("n/a");
        return 1;
    }
    printf("\n");

    while (n < N) {
        if (n % 15 == 0) {
            printf("FizzBuzz");
        }
        else if (n % 3 == 0) {
            printf("Fizz");
        }
        else if (n % 5 == 0) {
            printf("Buzz");
        }
        else {
            printf("%d", n);
        }
        n++;
        printf("\n");
    }
}