#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node * next;
};


int main(int argc, char* argv[]) {

    struct Node * start = NULL;

    int number;
    while (scanf("%d\n", &number) == 1) {
        struct Node * new = malloc(sizeof(struct Node));
        new->number = number;
        new->next = NULL;
        
        // first element
        if (start == NULL) {
            start = new;
        } else {
            if (start->number > number) {
                new->next = start;
                start = new;
            } else {
                struct Node * current = start;
        
                while (current->next != NULL) {
                    if (current->next->number > number) {
                        // found it!
                        break;
                    }
                    current = current->next;
                }
                // insert
                new->next = current->next;
                current->next = new;
            }
        }
    }

    // output
    struct Node * current = start;
    while (current != NULL) {
        printf("%d ", current->number);
        struct Node * tmp = current;
        current = current->next;
        // deallocate
        free(tmp);
    }
    printf("\n");

    return 0;
}




