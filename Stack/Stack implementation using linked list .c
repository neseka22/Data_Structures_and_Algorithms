#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

int main() {
    int n, value;

    printf("Enter number of elements to insert: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Stack Overflow! Memory not available\n");
            return 0;
        }

        scanf("%d", &value);
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    printf("\nStack stored in linked list:\n");
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
