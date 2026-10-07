#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coachNo;
    struct Node *next;
};

// Add coach
void addCoach(struct Node **head) {
    int coachNo;
    struct Node *newNode, *temp;

    printf("Enter coach number: ");
    scanf("%d", &coachNo);

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->coachNo = coachNo;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        temp = *head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    printf("Coach added successfully.\n");
}

// Display coaches
void display(struct Node *head) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("No coaches available.\n");
        return;
    }

    printf("Train Coaches: ");

    while (temp != NULL) {
        printf("%d -> ", temp->coachNo);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Delete first coach
void removeCoach(struct Node **head) {
    struct Node *temp;

    if (*head == NULL) {
        printf("No coaches available.\n");
        return;
    }

    temp = *head;
    *head = (*head)->next;

    printf("Coach %d removed successfully.\n", temp->coachNo);

    free(temp);
}

int main() {
    struct Node *head = NULL;
    int choice;

    printf("----- Train Coach Management -----\n");

    do {
        printf("\n1. Add Coach");
        printf("\n2. Display Coaches");
        printf("\n3. Remove First Coach");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addCoach(&head);
                break;

            case 2:
                display(head);
                break;

            case 3:
                removeCoach(&head);
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}