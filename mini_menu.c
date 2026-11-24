#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void hello(void) {
    printf("Привет!\n");
} 

int main(void) {
    int choice;

    do {
        printf("=== Меню ===\n");
        printf("1 - приветствие\n");
        printf("2 - сложить два числа\n");
        printf("3 - выйти\n");

        printf("Выберите пункт (1-3)\n>>> ");

        if (scanf("%d", &choice) != 1) {
            printf("Неверный ввод!\n");
            while (getchar() != '\n');
        }
        else {
            switch (choice) {
            case 1:
                hello();
                break;
            case 2: {
                int a, b;
                printf("Введите два числа через пробел: ");
                if (scanf("%d %d", &a, &b) != 2) {
                    printf("Неверный ввод!\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Сумма: %d\n", sum(a, b));
                break;
            }
                
            case 3:
                break;
            default:
                printf("В меню нет такого пункта.\n");
                break;
            }
        }
    }
    while (choice != 3);
    return 0;
}