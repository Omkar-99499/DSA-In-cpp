 Train Coach Management Using Singly Linked List

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

