#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node * next;
};


int main(int argc, char* argv[]) {

    // hash table size and also the modulo for the hash function
    int N = atoi(argv[1]);
    // hash table
    struct Node * table [N];
    for (int i = 0; i < N; i++) {
        table[i] = NULL;
    }

    int number;
    while (scanf("%d\n", &number) == 1) {
        // node representing the number
        struct Node * new = malloc(sizeof(struct Node));
        new->number = number;
        new->next = NULL;

        // hash function
        int key = number % N;
        
        // first element
        if (table[key] == NULL) {
            table[key] = new;
        } else {
            // find end of chain
            struct Node * current = table[key];
            while (current->next != NULL) {
                current = current->next;
            }
            // insert
            current->next = new;
        }
    }

    // output
    for (int i = 0; i < N; i++) {
        printf("%d:", i);
        struct Node * current = table[i];
        while (current != NULL) {
            printf(" %d", current->number);
            current = current->next;
        }
        printf("\n");
    }

    return 0;
}




