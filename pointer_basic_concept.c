#include <stdio.h>

int main() {
    int num;
    int *ptr;

    // Take number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the address of num in pointer
    ptr = &num;

    printf("\nValue of variable = %d\n", num);
    printf("Address of variable = %p\n", (void*)&num);
    printf("Value stored in pointer = %p\n", (void*)ptr);
    printf("Value accessed through pointer = %d\n", *ptr);

    return 0;
}