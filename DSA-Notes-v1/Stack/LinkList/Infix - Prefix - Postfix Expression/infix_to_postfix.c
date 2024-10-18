/*====================================================================
 * @file: infix_to_postfix.c
 * 
 * Algorithms:
 * 
 * Case 1: Function to check if the stack is empty
 *   - If top is -1, the stack is empty.
 * 
 * Case 2: Function to check if the stack is full
 *   - If top is equal to the size minus 1, the stack is full.
 * 
 * Case 3: Push an element to the stack
 *   - If the stack is not full, increment top and add the element to the top position.
 * 
 * Case 4: Pop an element from the stack
 *   - If the stack is not empty, retrieve the top element, decrement top, and return the value.
 * 
 * Case 5: Get the size of the stack
 *   - Traverse the expression to find its length.
 * 
 * Case 6: Get the precedence of the operator
 *   - Return precedence values based on the operator (*, / have higher precedence than +, -).
 * 
 * Case 7: Check if the character is an operator
 *   - Return 1 if the character is an operator (+, -, *, /), otherwise return 0.
 * 
 * Case 8: Get the top element of the stack
 *   - Return the element at the top of the stack.
 * 
 * Case 9: Convert infix to postfix
 *   - Initialize a stack and postfix string.
 *   - Traverse the infix expression:
 *      - If the character is not an operator, add it to the postfix.
 *      - If the character is an operator:
 *          - If the operator has higher precedence than the top of the stack, push it onto the stack.
 *          - Otherwise, pop operators from the stack and add them to the postfix until the stack is empty or the top has lower precedence.
 *   - Pop any remaining operators from the stack and append them to the postfix.
 *   - Append '\0' to the postfix to make it a valid string.
 *   - Return the postfix string.
 */

#include <stdio.h>
#include <stdlib.h>

// Define a structure for the stack
struct Stack
{
    int size;
    int top;
    char *arr;
};

typedef struct Stack stack;

// case 1: Function to check if the stack is empty
int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// case 2: Function to check if the stack is full
int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// case 3: Push an element to the stack
void push(stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %c to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val; // Adding the element to the top position
    }
}

// case 4: Pop an element from the stack
char pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return '\0';
    }
    else
    {
        char val = ptr->arr[ptr->top]; // Storing the top element in a variable
        ptr->top--;
        return val;
    }
}

// case 5: Get the size of the stack
int getStackSize(char *exp)
{
    int length = 0;
    while (exp[length] != '\0')
    {
        length++;
    }
    return length; // return the length of the expression
}

// case 6: Get the precedence of the operator
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

// case 7: Check if the character is an operator
int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/') ? 1 : 0;
}

// case 8: Get the top element of the stack
char stackTop(stack *sp)
{
    return sp->arr[sp->top];
}

// case 9: Convert infix to postfix
char *infixToPostFix(char *infix)
{
    stack *sp = (stack *)malloc(sizeof(stack));

    // Check if memory allocation was successful
    if (sp == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    sp->size = getStackSize(infix);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    // Check if memory allocation was successful
    if (sp->arr == NULL)
    {
        printf("Memory allocation failed\n");

        // Free the allocated memory for the stack
        free(sp);

        return NULL;
    }

    char *postfix = (char *)malloc((sp->size + 1) * sizeof(char)); // Empty string same size as infix expression

    // Check if memory allocation was successful
    if (postfix == NULL)
    {
        printf("Memory allocation failed\n");

        // Free the allocated memory for the stack
        free(sp->arr);
        free(sp);

        return NULL;
    }

    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition

    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }

    postfix[j] = '\0';

    // Free the allocated memory for the stack
    free(sp->arr);
    free(sp);

    return postfix;
}

int main()
{
    char *infix = "x+y*z-m";
    char *result = infixToPostFix(infix);

    if (result != NULL)
    {
        printf("Postfix is %s", result);

        // Free the allocated memory for the postfix string
        free(result);
    }

    return 0;
}
