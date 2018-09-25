#include <stdio.h>
#include <stdlib.h>

void print_matrix(int N, int matrix[]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i*N+j]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[]) {
    int N = atoi(argv[1]);
    int numbers[N*N];

    for (int i = 0; i < N*N; i++) {
        scanf("%d\n", &numbers[i]);
    }
    
    print_matrix(N, numbers);
    printf("\n");

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int k = i*N+j;
            int l = j*N+i;
            int temp = numbers[k];
            numbers[k] = numbers[l];
            numbers[l] = temp;
        }
    }

    print_matrix(N, numbers);

    return 0;
}




