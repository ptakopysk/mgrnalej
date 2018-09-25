#include <stdio.h>
#include <stdlib.h>

struct Node {
    int number;
    struct Node * lower;
    struct Node * greater;
};

void dfs(struct Node * root) {
    if (root->lower != NULL) {
        dfs(root->lower);
    }
    printf("%d\n", root->number);
    if (root->greater != NULL) {
        dfs(root->greater);
    }
}

int main() {

    struct Node * root = NULL;

    int number;
    while (scanf("%d\n", &number) == 1) {
        struct Node * new = malloc(sizeof(struct Node));
        new->number = number;
        if (root == NULL) {
            root = new;
        } else {
            struct Node * current = root;
            while (1) {
                if (number < current->number) {
                    if (current->lower == NULL) {
                        current->lower = new;
                        break;
                    } else {
                        current = current->lower;
                    }
                } else {
                    // number > current number
                    if (current->greater == NULL) {
                        current->greater = new;
                        break;
                    } else {
                        current = current->greater;
                    }
                }
            }
        }
    }

    dfs(root);

    return 0;
}

