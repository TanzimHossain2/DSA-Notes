# Parenthesis Matching Problem

When crafting an expression with brackets, it's essential to ensure the proper ordering of brackets, ensuring each opening bracket aligns with its corresponding closing bracket.

**Mathematical Expression:**

```text
((3x + 4y) * (5x + 7y)) + (2x + y)
```

**Brackets-only Expression:**

```text
( ( ) ( ) ) + ( )
```

### Key Features of a Valid Parentheses Expression:-

- Each opening bracket has a corresponding closing bracket.
- Each pair of parentheses is correctly ordered.

**Balanced and Unbalanced Expressions:**

```text
| Balanced Expression | Unbalanced Expression |
|---------------------|-----------------------|
|       (a + b)       |         (a + b        |
|     [(a + b) * c]   |       [(a + b) * c)   |
|     {(a + b) * c}   |       {(a + b) * c)   |
|     {()}[]          |       {()}[)          |
```

**Unbalanced Expressions:**

- The first expression **(a + b** is unbalanced due to the lack of a closing bracket for the opening bracket **(**.
- The second expression **[(a + b) * c)** is unbalanced as the closing bracket **)** is not in the correct order.
- The third expression **{(a + b) * c)** is unbalanced as the closing bracket **)** is not in the right order.
- The fourth expression **{()}[)** is unbalanced as the closing bracket **)** is not correctly ordered.

---

## Stack Visualization

![Stack Visualization](images/stack_visualization.jpg)

---
**Utilizing Stacks to Match Parentheses:**

1. Assume the expression is given as a character array.

```text
3*2-(8+1) -->  { 3 | * | 2 | - | ( | 8 | + | 1 | ) | \0 }
                ---+---+---+---+---+---+---+---+---+---+
                   0   1   2   3   4   5   6   7   8   9
```

2.Iterate through the character array, focusing on opening and closing parentheses. Each opening parenthesis is pushed onto the stack, and each closing parenthesis pops the stack. It iterate until 'EOE'  (End of Expression) is reached. '\0' is used to indicate the end of the expression.

**Conditions for Unbalanced Parentheses:**

- While popping, the stack should not underflow. If it happens, then it's unbalanced.
  - For example, the expression **(2+3)*6)1+5** lacks an opening bracket for the closing bracket **)**. Attempting to pop from the stack will result in an underflow, indicating an unbalanced expression.

- At 'EOE' (End of Expression), the stack should be empty. => if it happens, then it's balanced.
  - For example, the expression **(2+3)*6(1+5)** lacks a closing bracket for the opening bracket **(**. Upon reaching the end of the expression, if the stack is not empty, the expression is unbalanced.

**Note:**
Counting and matching the numbers of opening and closing brackets are insufficient to determine if the parentheses are balanced. For example, **1+3)*6(6+2** has an equal number of opening and closing brackets but is unbalanced.

---
**Steps to Determine if an Expression is Balanced or Unbalanced:**

1. Input the expression and convert it into a character stack.
2. Scan the characters of the expression one by one.
3. If the scanned character is an opening bracket **(**, push it into the stack.
4. If the scanned character is a closing bracket **)**, pop the stack. If the popped character is an opening bracket **(**, then it's balanced. Otherwise, the parentheses are not balanced.
5. After scanning the complete expression, if there is any parenthesis left in the stack or if the stack is not empty, the expression is unbalanced.
6. A match of parentheses is considered unbalanced when encountering either of these two issues:
   - No more opening brackets inside the stack to pop, and you come across a closing bracket.
   - The stack size is not zero, or there are still more than zero opening brackets present in the stack after reaching EOE (end-of-expression).

## Parenthesis Matching Algorithm

```text
ParenthesisMatching(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (isEmpty())
                return 0;
            pop();
        }
    }
    return isEmpty() ? 1 : 0;
}
```

## Time and Space Complexity

When you running a loop, the time complexity is O(1) * n = O(n). The space complexity is O(n) because we are using a stack.

- Time Complexity: O(n)
- Space Complexity: O(n)
