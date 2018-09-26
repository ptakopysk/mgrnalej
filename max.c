#include <stdio.h>

int main() {
    int number;
    int max = -1;
    while (scanf("%d", &number) == 1) {
        if (number > max) {
            max = number;
        }
        printf("%d\n", max);
    }

    printf("%d\n", max);

    return 0;
}


