#include <stdio.h>

#define SIZE 5

int main()
{
    int stack[SIZE];
    int top = -1;
    int value;
    for(int i = 0; i < 3; i++)
    {
        printf("Enter value: ");
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
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("\nPopped element = %d\n", stack[top]);
        top--;
    }
    printf("\nRemaining stack:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }

    return 0;
}