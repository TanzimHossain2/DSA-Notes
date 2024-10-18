/*====================================================================
 * @file: parenthesis_match.c
 *
 * @description: C program to check if the parentheses in an expression are
 * balanced or not using a stack. It does not check the validity of the expression.
 * The program utilizes a stack data structure to determine whether the opening
 * and closing parentheses in an expression are properly balanced.
 *
 * @details:
 * - The program defines a stack structure with functions to check if the stack
 *   is empty, full, push elements onto the stack, and pop elements from the stack.
 * - The parenthesisMatch function traverses the given expression, using the stack
 *   to track the occurrence of opening and closing parentheses. If the expression
 *   has balanced parentheses, the function returns 1; otherwise, it returns 0.
 *
 * @functions:
 * - case 1: int isEmpty(stack *ptr) - Checks if the stack is empty.
 * - case 2: int isFull(stack *ptr) - Checks if the stack is full.
 * - case 3: void push(stack *ptr, char val) - Pushes an element onto the stack.
 * - case 4: char pop(stack *ptr) - Pops an element from the stack.
 * - case 5: int getStackSize(char *exp) - Gets the size of the stack.
 * - case 6: int parenthesisMatch(char *exp) - Checks for balanced parentheses.
 * - main() - Reads the expression and calls the parenthesisMatch function.
 --------------------------------------------------------------------
 
 * - Clearly describe why we use a stack for this task.
 * - Break down the steps of the algorithm in simple terms.
 * - Insert comments in the code to explain crucial points.
 * - Make sure both the code and comments are easy to follow.
 * - Provide examples or scenarios for better illustration.
 * - Open to feedback for further improvement.

 */


#include <stdio.h>
#include <stdlib.h>

// Define a structure for the stack
struct Stack
{
    int size;  // Size of the stack
    int top;   // Index of the top element
    char *arr; // Array to store stack elements
};

typedef struct Stack stack;

//case 1: Function to check if the stack is empty
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

//case 2: Function to check if the stack is full
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

//case 3: Push an element to the stack
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

//case 4: Pop an element from the stack
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

//case 5: Get the size of the stack
int getStackSize(char *exp)
{
    int length = 0; // initialize the length to 0
    while (exp[length] != '\0')
    {
        length++;
    }
    return length; // return the length of the expression
}

//case 6: Parenthesis Matching function
int parenthesisMatch(char *exp)
{
    // create and initialize the stack
    stack *sp = (stack *)malloc(sizeof(stack)); // allocate memory for the stack

    sp->size = getStackSize(exp); // get the size of the stack
    sp->top = -1; // initialize the top of the stack. -1 means the stack is empty
    sp->arr = (char *)malloc(sp->size * sizeof(char)); // allocate memory for the stack array

    // traverse until the end of the expression and check for parenthesis matching condition
    for (int i = 0; exp[i] != '\0'; i++)
    {
        // if the current character is an opening parenthesis then push it to the stack
        if (exp[i] == '(')
        {
            push(sp, '(');  // push the opening parenthesis to the stack
        }

        // if the current character is a closing parenthesis then pop from the stack
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0; // if the stack is empty then the expression is not balanced
            }
            pop(sp); // pop the opening parenthesis from the stack
        }
    }

    // check if the stack is empty
    if (isEmpty(sp))
    {
        free(sp->arr); // free the allocated memory for the stack array
        free(sp);      // free the allocated memory for the stack
        return 1;      // if the stack is empty then the expression is balanced
    } else {
        free(sp->arr); // free the allocated memory for the stack array
        free(sp);      // free the allocated memory for the stack
        return 0;      // if the stack is not empty then the expression is not balanced
    } 
}

int main()
{
    char *exp = "8*(9)";

    // Function call to check the parenthesis matching
    if (parenthesisMatch(exp))
    {
        printf("The parentheses are balanced\n");
    }
    else
    {
        printf("The parentheses are not balanced\n");
    }

    return 0;
}
