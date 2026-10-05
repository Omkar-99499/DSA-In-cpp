#include <iostream>
using namespace std;

struct Node {
    int coachNo;
    Node* next;
};

void addCoach(Node** head) {
    int coachNo;

    cout << "Enter coach number: ";
    cin >> coachNo;

    Node* newNode = new Node();
    newNode->coachNo = coachNo;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Coach added successfully.\n";
}

void display(Node* head) {
    if (head == NULL) {
        cout << "No coaches available.\n";
        return;
    }

    Node* temp = head;

    cout << "\nTrain Coaches: ";

    while (temp != NULL) {
        cout << temp->coachNo << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void removeCoach(Node** head) {
    if (*head == NULL) {
        cout << "No coach to remove.\n";
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;

    cout << "Coach " << temp->coachNo << " removed successfully.\n";

    delete temp;
}

int main() {
    Node* head = NULL;
    int choice;

    cout << "----- Train Coach Management -----\n";

    do {
        cout << "\n1. Add Coach";
        cout << "\n2. Display Coaches";
        cout << "\n3. Remove First Coach";
        cout << "\n4. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

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
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
