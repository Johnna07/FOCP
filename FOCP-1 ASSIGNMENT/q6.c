// SWAPING TWO NOS.
#include <stdio.h>

int main() {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Original Values are");
    printf("a = %d, b = %d\n", a, b);

    // 1️⃣ Using Temporary Variable
    temp = a;
    a = b;
    b = temp;
    printf("\nUsing Temporary Variable:\n");
    printf("a = %d, b = %d\n", a, b);

    // Restore values for next method
    printf("\nRestoring original values\n");
    temp = a;
    a = b;
    b = temp;

    //  Using Arithmetic Operations
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n Using Arithmetic Operations:\n");
    printf("a = %d, b = %d\n", a, b);

    // Restore values again
    a = a + b;
    b = a - b;
    a = a - b;

    //  Using Pointers
    p1 = &a;
    p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("\n Using Pointers:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
