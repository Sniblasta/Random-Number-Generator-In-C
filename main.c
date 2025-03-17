#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int num = 0, kses = 0, kses1 = 0;

    srand(time(NULL));

    while (1) {
        printf("Write your random number limit: ");
        if (scanf("%d", &num) != 1 || num <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n');  // Clear invalid input
            continue;
        }

        int random_num = 1 + rand() % num;
        printf("Random Number: %d\n", random_num);

        printf("Wanna continue generating random numbers?\n1: Yes\n2: No\n");
        if (scanf("%d", &kses) != 1 || (kses != 1 && kses != 2)) {
            printf("Invalid input. Please enter 1 or 2.\n");
            while (getchar() != '\n');  // Clear invalid input
            continue;
        }

        if (kses == 2) {
            break;
        }

        printf("Wanna keep your previous numbers?\n1: Yes\n2: No\n");
        if (scanf("%d", &kses1) != 1 || (kses1 != 1 && kses1 != 2)) {
            printf("Invalid input. Please enter 1 or 2.\n");
            while (getchar() != '\n');  // Clear invalid input
            continue;
        }

        if (kses1 == 2) {
            system("CLS");  // Clears the console for Windows. Use "clear" on UNIX-based systems
        }
    }

    system("PAUSE");
    return 0;
}
