# CCE Unit 1 – Train Coach Management Using Singly Linked List

## Problem Statement

Write a C++ program to implement a Train Coach Management System using a Singly Linked List. Each train coach is represented as a node. The program provides a menu-driven system to add a coach, display all coaches, remove the first coach, and exit.

## Algorithm

### Step 1: Start
Start the program.

### Step 2: Create Node
Create a Node containing:
- Coach number
- Pointer to the next node

### Step 3: Add Coach
Create a new node and add it at the end of the linked list.

### Step 4: Display Coaches
Traverse the linked list and display all coach numbers.

### Step 5: Remove First Coach
Move the head pointer to the second node and delete the first node.

### Step 6: Exit
Stop the program.

## Flowchart

```text
              START
                |
                v
        head = nullptr
                |
                v
          Display Menu
                |
                v
          Enter Choice
                |
        +-------+-------+-------+-------+
        |       |       |       |       |
        v       v       v       v       |
      Add    Display  Remove   Exit     |
     Coach   Coaches  First            |
                       Coach            |
        |       |       |              |
        +-------+-------+--------------+
                |
                v
          Choice = 4 ?
             /     \
           No       Yes
           |         |
           v         v
      Display Menu   END
```

### Flowchart Explanation

1. **Start** – Program सुरू होतो.
2. **head = nullptr** – सुरुवातीला Linked List रिकामी असते.
3. **Display Menu** – Add Coach, Display Coaches, Remove First Coach आणि Exit हे options दाखवले जातात.
4. **Enter Choice** – User कडून choice घेतली जाते.
5. **Add Coach** – नवीन Coach Linked List मध्ये जोडला जातो.
6. **Display Coaches** – सर्व Coaches display केले जातात.
7. **Remove First Coach** – Linked List मधील पहिला Coach delete केला जातो.
8. **Exit** – User ने 4 निवडल्यास program बंद होतो.
9. **Choice 4 नसल्यास** – Menu पुन्हा display केला जातो.

## C++ Code

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addCoach(Node*& head) {
    int coachNo;

    Node* newNode = new Node;

    cout << "Enter Coach Number: ";
    cin >> coachNo;

    newNode->data = coachNo;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Coach added successfully.\n";
}

void displayCoaches(Node* head) {
    if (head == nullptr) {
        cout << "No coaches available.\n";
        return;
    }

    Node* temp = head;

    cout << "Train Coaches: ";

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void removeFirstCoach(Node*& head) {
    if (head == nullptr) {
        cout << "No coach to remove.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    delete temp;

    cout << "First coach removed successfully.\n";
}

int main() {
    Node* head = nullptr;
    int choice;

    do {
        cout << "\n----- Train Coach Management -----\n";
        cout << "1. Add Coach\n";
        cout << "2. Display Coaches\n";
        cout << "3. Remove First Coach\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCoach(head);
                break;

            case 2:
                displayCoaches(head);
                break;

            case 3:
                removeFirstCoach(head);
                break;

            case 4:
                cout << "Program exited.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
```

## Sample Output

```text
----- Train Coach Management -----

1. Add Coach
2. Display Coaches
3. Remove First Coach
4. Exit

Enter your choice: 1
Enter Coach Number: 101
Coach added successfully.

Enter your choice: 1
Enter Coach Number: 102
Coach added successfully.

Enter your choice: 2
Train Coaches: 101 -> 102 -> NULL

Enter your choice: 3
First coach removed successfully.

Enter your choice: 2
Train Coaches: 102 -> NULL

Enter your choice: 4
Program exited.
```

## C++ Concepts Used

- Structure
- Pointer
- `new`
- `delete`
- Functions
- `if-else`
- `while`
- `do-while`
- `switch-case`

## Conclusion

The Train Coach Management System demonstrates how a Singly Linked List can be used to dynamically add, display, and remove train coaches.
