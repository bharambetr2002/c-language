# C Programming Notes

## Introduction to C

- C is a general-purpose programming language created by **Dennis Ritchie** at **Bell Laboratories** in **1972**.
- The main difference between **C** and **C++** is that **C++ supports classes and objects**, while **C does not**.

---

## Different Types of Variables

### 1. Variable Types:

- **int** - Stores integers (whole numbers) without decimals, e.g., `123`, `-123`
- **float** - Stores floating-point numbers (with decimals), e.g., `19.99`, `-19.99`
- **char** - Stores single characters, e.g., `'a'`, `'B'`. Characters are enclosed in single quotes.

### 2. Format Specifiers:

Used with the `printf` function to specify the type of data:

- `%d` - Integer (`%i` can also be used for integers)
- `%c` - Character
- `%f` - Float
- `%s` - String
- `%lf` - Double

---

## Data Types in C

| Data Type  | Size         | Description                                                      |
| ---------- | ------------ | ---------------------------------------------------------------- |
| **int**    | 2 or 4 bytes | Stores whole numbers without decimals                            |
| **float**  | 4 bytes      | Stores fractional numbers, sufficient for **6-7** decimal digits |
| **double** | 8 bytes      | Stores fractional numbers, sufficient for **15** decimal digits  |
| **char**   | 1 byte       | Stores a **single character**, letter, or ASCII values           |

To get the size of a variable:

```c
char myChar;
printf("%lu\n", sizeof(myChar));
```

---

## Type Conversion

**Converting data from one type to another is called type conversion.**

1. **Implicit Conversion (Automatic)**
2. **Explicit Conversion (Manual)** - Done manually using **type casting**.

Example:

```c
int num1 = 5;
int num2 = 2;
float sum = (float) num1 / num2;

printf("%f", sum); // Output: 2.500000
```

---

## Operators in C

C divides operators into the following groups:

1. **Arithmetic Operators**
2. **Assignment Operators**
3. **Comparison Operators**
4. **Logical Operators**
5. **Bitwise Operators**

### Boolean in C:

To use Boolean values, include:

```c
#include <stdbool.h>
```

### Ternary Operator (Short-Hand If...Else):

```c
variable = (condition) ? expressionTrue : expressionFalse;
```

---

## Loops in C

### Choosing the Right Loop:

- **Fixed number of repetitions?** → `for`
- **Unknown number of repetitions?** → `while`
- **At least one execution before checking?** → `do-while`

#### **While Loop**

> Do not forget to **increment** the loop variable (`i++`), otherwise, it will **never end**!

#### **Do-While Loop**

> The code **runs at least once** before checking the condition.

---

## Break and Continue in C

- **Break** - Used to exit a loop prematurely.
- **Continue** - Skips the current iteration and moves to the next.

---

## Arrays in C

Arrays store **multiple values** in a single variable instead of declaring separate variables.

### **Syntax:**

```c
datatype arrayName[] = {value1, value2, value3};
```

- **Indexes start at 0**
- **Array elements can be accessed using index numbers:**
  ```c
  arrayName[i] = value;  // where i is the index
  ```
- **Arrays store values of the same data type**
- **To get the size of an array:**
  ```c
  sizeof(arrayName);
  ```

### **Calculate Array Length:**

```c
datatype length = sizeof(arrayName) / sizeof(arrayName[0]);
```

---

## Strings in C

Used for **storing text/characters**.

### **Syntax:**

```c
char stringName[] = "message";
```

- **Format Specifier:** `%s`
- **For single characters:** `%c`
- To perform operations on strings, include the header file:
  ```c
  #include <string.h>
  ```

### **User Input in C:**

```c
scanf("%s", variableName);
```

> **Limitation:** `scanf()` does not read spaces or tabs; it stops at the first whitespace.

---

## Memory Address in C

Every variable has a **memory address**.

### **Accessing the Memory Address:**

```c
&variableName
```

> **Memory addresses are stored in hexadecimal format.**

### **Pointers in C**

A **pointer** stores the **memory address** of a variable.

```c
int myVar = 10;
int *ptr = &myVar;
printf("%p", ptr); // Prints memory address
```

---

## Functions in C

Functions are blocks of code that execute **only when called**.

### **Syntax:**

```c
void myFunction() {
   // Code to execute
}
```

- **Main() is a function.**
- **printf() is also a function.**

### **Function Parameters & Arguments:**

Parameters act as **variables inside the function**.

> The number of arguments in a function call must **match** the number of parameters in the function declaration.

### **Passing Arrays as Function Parameters:**

```c
void myFunction(int array[]) {
   // Function code
}
```

---

## Variable Scope in C

- **Local Scope** - Variables declared inside a function, accessible **only** within that function.
- **Global Scope** - Variables declared **outside** functions, accessible **throughout the program**.

### **Example:**

```c
int globalVar = 10; // Global variable

void myFunction() {
   int localVar = 5; // Local variable
}
```

---

## Memory Management in C

**Types of Memory Allocation:**

1. **Static Memory** - Reserved **before** the program runs (Compile-time allocation).
2. **Dynamic Memory** - Allocated **during** runtime.

### **Dynamic Memory Functions:**

```c
malloc()  // Allocates memory
calloc()  // Allocates and initializes memory
realloc() // Resizes allocated memory
free()    // Deallocates memory
```

### **Memory Leaks**

> A memory leak occurs when **allocated memory is never freed**. This can slow down the computer over time.

---

## Structures (Structs) in C

Used to **group related variables** into one place.

### **Example:**

```c
struct MyStructure {
   int myNum;
   char myLetter;
};
```

---

## Enumeration (enum) in C

Used to define a **set of named integer constants**.

### **Example:**

```c
enum Level { LOW, MEDIUM, HIGH };
```

---

## Conclusion

This document provides a structured overview of essential **C programming** concepts with corrections, improvements, and formatting.

**To Read More:**

- **UNIX Programming**
