#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int N = atoi(argv[1]);
    int numbers[N];

    for (int i = 0; i < N; i++) {
        scanf("%d\n", &numbers[i]);
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int it = 0; it < N; it++) {
        for (int i = 0; i < N-1; i++) {
            if (numbers[i] > numbers[i+1]) {
                int temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}




