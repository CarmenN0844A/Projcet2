#include<stdio.h>

int main() {
    int a, b, n, c;

    
    printf("Welcome to the Calculator created by CarmenN0844A\n");
    printf("Here are the options for you:\n");
    printf("1 <: Addition \n2 <: Multiplication \n3 <: Division \n4 <: Subtraction\n");

   
    printf("Enter your choice: ");
    scanf("%d", &n);

    
    if (n == 1) {
        printf("Enter any two numbers for Addition:\n");
        scanf("%d%d", &a, &b);
        c = a + b;
        printf("The addition of %d and %d is %d\n", a, b, c);
    }
    
    else if (n == 2) {
        printf("Enter any two numbers for Multiplication: \n");
        scanf("%d%d", &a, &b);
        c = a * b;
        printf("The multiplication of %d and %d is %d\n", a, b, c);
    }
   
    else if (n == 3) {
        printf("Enter any two numbers for Division: \n");
        scanf("%d%d", &a, &b);
        
        
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            // Perform the division
            float result = (float)a / b; // Use float for division
            printf("The division of %d by %d is %.2f\n", a, b, result);
        }
    }
    
    else {
        printf("Enter any two numbers for Subtraction: \n");
        scanf("%d%d", &a, &b);
        c = a - b;
        printf("The subtraction of %d and %d is %d\n", a, b, c);
    }

    return 0;
}

