# Train Coach Management Using Singly Linked List

## Problem Statement

Write a C program to implement a **Train Coach Management System using a Singly Linked List**.
Each train coach is represented as a node. The program provides a menu-driven system to **add a coach, display all coaches, remove the first coach, and exit**.

# Algorithm

### Step 1: Start
Start the program.

### Step 2: Create Node
Create a structure `Node` containing:
* `coachNo` – stores the coach number.
* `next` – stores the address of the next node.

### Step 3: Initialize Linked List

Set:
```c
head = NULL;
```

### Step 4: Display Menu
Display the following choices:

```text
1. Add Coach
2. Display Coaches
3. Remove First Coach
4. Exit
```

### Step 5: Add Coach

1. Ask the user to enter the coach number.
2. Create a new node using `malloc()`.
3. Store the coach number in the new node.
4. Set `newNode->next = NULL`.
5. If the list is empty, make the new node the `head`.
6. Otherwise, traverse to the last node.
7. Connect the new node to the last node.
8. Display a success message.

### Step 6: Display Coaches

1. Check whether the list is empty.
2. If empty, display "No coaches available."
3. Otherwise, start from `head`.
4. Traverse each node using the `next` pointer.
5. Display each coach number.
6. Continue until `NULL` is reached.

### Step 7: Remove First Coach

1. Check whether the list is empty.
2. If empty, display "No coaches available."
3. Store the first node in a temporary pointer.
4. Move `head` to the next node.
5. Display the removed coach number.
6. Free the memory using `free()`.

### Step 8: Exit

If the user selects choice `4`, terminate the program.

### Step 9: Stop

Stop the program.

# Flowchart

```text
                         START
                           |
                           ↓
                    head = NULL
                           |
                           ↓
                    Display Menu
                           |
                           ↓
                    Enter Choice
                           |
              ┌────────────┼────────────┐
              ↓            ↓            ↓
           Choice 1     Choice 2      Choice 3
              |            |            |
              ↓            ↓            ↓
          Add Coach    Display       Remove First
              |         Coaches         Coach
              |            |             |
              ↓            ↓             ↓
        Create New     Traverse       Check Empty
           Node          List             |
              |            |              ↓
              ↓            |        Move head to
       Insert at End       |        next node
              |            |              |
              └──────┬─────┴──────┬───────┘
                     |            |
                     ↓            ↓
                  Display      free(temp)
                     |            |
                     └──────┬─────┘
                            ↓
                       Display Menu
                            |
                            ↓
                       Choice = 4?
                       /          \
                     NO            YES
                      |             |
                      └─────→───────┘
                                    ↓
                                   STOP
```

# Output

### Adding Coaches

```text
----- Train Coach Management -----

1. Add Coach
2. Display Coaches
3. Remove First Coach
4. Exit

Enter your choice: 1
Enter coach number: 101
Coach added successfully.

Enter your choice: 1
Enter coach number: 102
Coach added successfully.

Enter your choice: 1
Enter coach number: 103
Coach added successfully.
```

### Display Coaches

```text
Enter your choice: 2
Train Coaches: 101 -> 102 -> 103 -> NULL
```

### Removing First Coach

```text
Enter your choice: 3
Coach 101 removed successfully.
```

### Display After Deletion

```text
Enter your choice: 2
Train Coaches: 102 -> 103 -> NULL
```

### Exit

```text
Enter your choice: 4
Program ended.
```
