# C Programming Basics

## Introduction
C is a powerful, general-purpose programming language developed in the early 1970s. It is widely used for system programming, embedded systems, and application development.

## Basic Syntax
- Every C program starts with `#include` directives.
- The `main()` function is the entry point.
- Statements end with a semicolon (`;`).
- Curly braces `{}` define blocks of code.

```c
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
```

### Line-by-Line Explanation
- `#include <stdio.h>`: Includes the Standard Input Output library for functions like `printf` and `scanf`.
- `int main() { ... }`: Main function where execution starts.
- `printf("Hello, World!");`: Prints text to the console.
- `return 0;`: Ends the program and returns 0 to the operating system.

## Input and Output in C

### Using `printf`
- Used to display output.
- Syntax: `printf("format string", values);`
- Example:
  ```c
  int a = 10;
  printf("Value of a is %d\n", a);
  ```

### Using `scanf`
- Used to take input from the user.
- Syntax: `scanf("format string", &variables);`
- Example:
  ```c
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  ```

## Variable Declaration Rules
- Must start with a letter or underscore (`_`).
- Cannot start with a digit.
- No spaces or special characters (except `_`).
- Case-sensitive.
- Example:
  ```c
  int age;
  float salary;
  char grade;
  ```

## Data Types in C
- `int`: Integer numbers (`int a = 5;`)
- `float`: Floating-point numbers (`float b = 3.14;`)
- `double`: Double-precision floating-point (`double c = 2.71828;`)
- `char`: Single character (`char d = 'A';`)

## Operators in C
- **Arithmetic Operators**: `+`, `-`, `*`, `/`, `%`
- **Relational Operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Logical Operators**: `&&`, `||`, `!`
- **Assignment Operators**: `=`, `+=`, `-=`, `*=`, `/=`
- **Increment/Decrement**: `++`, `--`

## Tokens in C (Detailed)
Tokens are the smallest units in a C program. Types of tokens:

### 1. Keywords
Reserved words with special meaning. Examples: `int`, `return`, `if`, `else`, `while`, `for`, `break`, `continue`.

### 2. Identifiers
Names for variables, functions, arrays, etc. Must follow variable naming rules.

### 3. Constants
Fixed values used in programs.
- Integer constants: `10`, `-5`
- Floating constants: `3.14`, `-0.001`
- Character constants: `'A'`, `'9'`
- String constants: `"Hello"`

### 4. Operators
Symbols that perform operations.
- Arithmetic: `+`, `-`, `*`, `/`, `%`
- Relational: `==`, `!=`, `>`, `<`, `>=`, `<=`
- Logical: `&&`, `||`, `!`
- Assignment: `=`, `+=`, `-=`, etc.

### 5. Special Symbols
Punctuation and other symbols.
- Semicolon: `;`
- Comma: `,`
- Parentheses: `()`
- Braces: `{ }`
- Brackets: `[ ]`
- Hash: `#`

### 6. Strings
Sequence of characters enclosed in double quotes. Example: `"Hello, World!"`

## Algorithm, Flowchart, and Pseudocode

### Algorithm
A step-by-step procedure to solve a problem.

### Flowchart
A diagram representing the flow of logic using symbols.

### Pseudocode
A simplified, language-independent description of an algorithm.

## Basic Questions & Solutions in file 
<img src="https://github.com/Noob-mukesh/C-language-Code/blob/main/day1/allquestion.jpg" alt="Basic C Questions" width="600">


### HINTS

### 1. Area of Circle
**Formula:** `area = π * r * r`

### 2. Circumference of Circle
**Formula:** `circumference = 2 * π * r`

### 3. Temperature Conversion (Celsius to Fahrenheit)
**Formula:** `F = (C * 9/5) + 32`

### 4. Swapping Two Numbers

### 5. Percentage and Total Marks of Student

### 6. Simple Interest (SI)
**Formula:** `SI = (P * R * T) / 100`

### 7. Compound Interest (CI)
**Formula:** `CI = P * (pow((1 + R/100), T)) - P`
