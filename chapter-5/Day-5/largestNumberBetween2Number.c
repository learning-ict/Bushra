// Write a program to find the largest number between two numbers

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is the largest number\n", num1);
    }else{
        printf("%d is the largest number\n", num2);
    }

return 0;
}