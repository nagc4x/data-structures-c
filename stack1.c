#include <stdio.h>

#define SIZE 5

int main()
{
    int stack[SIZE];
    int top = -1;
    int value;

    for(int i = 0; i < SIZE; i++)
    {
        printf("Enter number to push: ");
        scanf("%d", &value);

        if(top == SIZE - 1)
        {
            printf("Stack Overflow\n");
        }
        else
        {
            top++;
            stack[top] = value;
        }
    }

    printf("\nStack numbers are:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}