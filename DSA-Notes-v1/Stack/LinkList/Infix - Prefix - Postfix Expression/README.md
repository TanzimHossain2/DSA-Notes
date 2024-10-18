# Infix, Prefix, and Postfix Expressions

Infix:
```
<operand 1><operator><operand 2>
Example: 2 + 3
```

Prefix:
```
<operator><operand 1><operand 2>
Example: + 2 3
```

Postfix:
```
<operand 1><operand 2><operator>
Example: 2 3 +
```

## Table

| Infix         | Prefix        | Postfix       |
| -----         | ------        | -------       |
| A + B         | + A B         | A B +         |
| A*(B+C)*D     | * A + B C * D | A B C + * D * |
| A+B*C+D       | + + A * B C D | A B C * + D + |

## Precedence and Associativity of Operators

| Operator      | Precedence    | Associativity |
| --------      | -----------   | ------------- |
| +, -          | 2             | Left-to-Right |
| *, /          | 3             | Left-to-Right |

Learn more: [Operator Precedence](https://en.cppreference.com/w/c/language/operator_precedence)

## Examples

### Infix to Postfix Conversion

### Example 1: Infix to Prefix and Postfix Conversions
**Infix**: A * (B+C) * D  
**Postfix**: A B C + * D *

- Step 1: Assume B+C = 8 (B=2, C=6), A * (B+C) becomes A * 8 * D.
- Step 2: Assume A * 8 = 16, A * (B+C) * D becomes 16 * D.
- Step 3: Assume 16 * D = 32, the final postfix expression is 32.

---

### Example 2: Infix to Prefix and Postfix Conversions
Consider the expression: **x - y * z**

**Prefix:**

1. Parenthesize the expression: (x - (y * z))
2. Convert innermost parentheses into prefix: (x - [* y z]) → (- x * y z)
3. Repeat until outermost parentheses: (- x [* y z]) → - x * y z
4. Remove parentheses: (- x * y z) → - x * y z

Hence, the prefix expression is: **- x * y z**

**Postfix:**

1. Parenthesize the expression: (x - (y * z))
2. Convert innermost parentheses into postfix: (x - [y z *]) → (x y z * -)
3. Repeat until outermost parentheses: (x y z * -) → x y z * -
4. Remove parentheses: (x y z * -) → x y z * -

Hence, the postfix expression is: **x y z * -**

### Example 3: Infix to Prefix and Postfix Conversions
Consider the expression: **p - q - r / a**

**Prefix:**
1. Parenthesize the expression: ((p - q) - (r / a))
2. Innermost parentheses: ([- p q] - (/ r a)) → -[- p q] / r a
3. Remove parentheses: -[- p q] / r a → - - p q / r a

**Postfix:**
1. Parenthesize the expression: ((p - q) - (r / a))
2. Innermost parentheses: ([p q -] - (r a /)) → [p q -] [r a /] -
3. Remove parentheses: [p q -] [r a /] - → p q - r a / -

### Example 4: Infix to Prefix and Postfix Conversions
Consider the expression: **(m + n) * (p + q)**

**Prefix:**
1. Parenthesize the expression: ((m + n) * (p + q))
2. Innermost parentheses: ([+ m n] * (+ p q)) → * [+ m n] [+ p q]
3. Remove parentheses: * [+ m n] [+ p q] → * + m n + p q

**Postfix:**
1. Parenthesize the expression: ((m + n) * (p + q))
2. Innermost parentheses: ([m n +] * (p q +)) → [m n +] [p q +] *
3. Remove parentheses: [m n +] [p q +] * → m n + p q + *

---

## Conclusion

Understanding the conversion between infix, prefix, and postfix expressions provides a foundation for working with mathematical expressions in programming. These conversions are essential in parsing and evaluating expressions in compilers and interpreters.
