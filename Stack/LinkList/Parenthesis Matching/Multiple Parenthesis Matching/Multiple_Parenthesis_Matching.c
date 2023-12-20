/*=====================================================================
*
=           Multiple Parenthesis Matching using Stack               =
*
* @details: This function checks if the brackets in an expression are balanced or not. It uses a stack data structure to store the    opening brackets and pops them out when a closing bracket is encountered. If the stack is empty at the end of the expression, then the expression is balanced.
*
* @functions: isEmpty(), isFull(), push(), pop(), match(), getStackSize(), parenthesisMatch()
*
* @param: char *exp
* @returns: 1 if the expression is balanced, 0 if the expression is not balanced
*
**Note: This program only checks for brackets in a expression. It not check is the expression is valid or not. For example, the expression "((a+b)" is not valid but the program will return 1 as the expression is balanced. This program only checks if the brackets are balanced or not.
*=====================================================================*/

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

// case 1: Function to check if the stack is empty
int isEmpty(stack *ptr)
{
    return (ptr->top == -1) ? 1 : 0;
}

// case 2: Function to check if the stack is full
int isFull(stack *ptr)
{
    return (ptr->top == ptr->size - 1) ? 1 : 0;
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

// case 5: Check if the character is a matching parenthesis
int match(char a, char b)
{
    if (a == '(' && b == ')') // if the opening bracket is '(' and the closing bracket is ')'
    {
        return 1;
    }
    else if (a == '{' && b == '}') // if the opening bracket is '{' and the closing bracket is '}'
    {
        return 1;
    }
    else if (a == '[' && b == ']') // if the opening bracket is '[' and the closing bracket is ']'
    {
        return 1;
    }
    else // if the brackets are not matching
    {
        return 0;
    }
}

// case 6: Get the size of the stack
int getStackSize(char *exp)
{
    int length = 0; // initialize the length to 0
    while (exp[length] != '\0')
    {
        length++;
    }
    return length; // return the length of the expression
}

// case 7: Parenthesis Matching function
int parenthesisMatch(char *exp)
{
    // create and initialize the stack
    stack *sp = (stack *)malloc(sizeof(stack)); // allocate memory for the stack

    sp->size = getStackSize(exp);                      // get the size of the stack
    sp->top = -1;                                      // initialize the top of the stack. -1 means the stack is empty
    sp->arr = (char *)malloc(sp->size * sizeof(char)); // allocate memory for the stack array
    char popped_ch;                                    // variable to store the popped character

    // traverse until the end of the expression and check for parenthesis matching condition
    for (int i = 0; exp[i] != '\0'; i++)
    {
        // if the current character is an opening bracket then push it to the stack
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }

        // if the current character is a closing bracket then pop from the stack
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0; // if the stack is empty then the expression is not balanced
            }
            popped_ch = pop(sp); // pop the top element from the stack

            // if the popped character is not a matching bracket then the expression is not balanced
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }

    // check if the stack is empty
    if (isEmpty(sp))
    {
        free(sp->arr); // free the allocated memory for the stack array
        free(sp);      // free the allocated memory for the stack
        return 1;      // if the stack is empty then the expression is balanced
    }
    else
    {
        free(sp->arr); // free the allocated memory for the stack array
        free(sp);      // free the allocated memory for the stack
        return 0;      // if the stack is not empty then the expression is not balanced
    }
}

int main()
{
    char *exp = "{8*[{}](9)}";

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
