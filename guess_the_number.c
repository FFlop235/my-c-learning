#include <stdio.h>
#include <stdbool.h>

const int number = 67;

int main(void) {
    int n;
    bool is_guess = false;
    int attempts = 0;

    printf("=== Угадай число ===\n");

    while (!is_guess) {
        printf(">>> ");
        if (scanf("%d", &n) != 1) {
            printf("До свидания!\n");
            break;
        }

        attempts++;

        else if (n == number) {

            printf("Поздравляю, вы выиграли с %d попытки!\n", attempts);
            is_guess = true;
        }
        else if (n < number) {
            printf("больше\n");
        }
        else if (n > number) {
            printf("меньше\n");
        }
    }

    return 0;
}