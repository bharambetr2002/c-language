C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.
The main difference between C and C++ is that C++ supports classes and objects, while C does not.

Different Types of variables :

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes

Format Specifiers :- format specifiers are used together with th printf function to tell the compiler what type of data the variable is storing.

1. %d for number (%i for integer)
2. %c for char
3. %f for float
4. %s for strings
5. %lf for double

Data Types in C :-

1. int - 2 or 4 bytes - stores whole number, without decimals
2. float- 4bytes - stores fractional numbers, containing or more decimals. Sufficient for 6-7 decimal digits
3. double - 8 bytes - Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
4. char - 1 byte - Stores a single character/letter/number, or ASCII values

to get size of the variable :-
char myChar;
printf("%lu\n", sizeof(myChar));

Type Conversion :-
Converting data from one type to another is called as the type conversion.

    a. Implicit Conversion (automatically)
    b. Explicit Conversion (manually) : -
        These are done manually by placing the type in Parentheses () in front of the values.
        example :-
        int num1 = 5;
        int num2 = 2;
        float sum = (float) num1 / num2;

        printf("%f", sum); // 2.500000

C divides the operators into the following groups:

1. Arithmetic operators
2. Assignment operators
3. Comparison operators
4. Logical operators
5. Bitwise operators

To use boolean we should include - #include <stdbool.h>

Short Hand If...Else is nothing but same as teraary operator.
variable = (condition) ? expressionTrue : expressionFalse

for switch statement you need to use break and dafualt statement at any cost

Simple Trick to Remember Loops
For a fixed number of repetitions? → for
For an unknown number of repetitions? → while
For at least one execution before checking? → do-while

while loop :
Note: Do not forget to increase the variable used in the condition (i++), otherwise the loop will never end!

do-while loop
this will atleast run the code once
Note : Do not forget to increase the variable used in the condition, otherwise the loop will never end!s

Break and continue in c : -

Break - used to jump out of the loop
Continue - continue statement breaks one itreation in the loop, if a specified condition occurs and continues with the next iteration in the loop

Arrays :-

arrays are used to store multiple values in a single variable, insed of declaring separate variable for each value.
Syntax - datatype nameArray[] = {};
Accessing in the array is done with the help of index numbers
Indexes in c start with 0
to change the specific value of a specifi element in the array

arrayName[i] = value; where i is the index

Array holds the data of the same data type
To get the size of an array = sizeof

syntax
sizeof(arrayName);
the output will be show in bytes
like if there are 5 elements then the output will be shown as the 20
which is 5(arraysize)\*4(int variable size) = 20 bytes

length in array
datatype length = sizeOf(arrayName)/ sizeOf(arrayName[0])

Strings
Thhis are used for storing text/characters

syntax
char stringName[] = "message";
format specifier %s
for single character use %c
to perform operations on strings we need to include the header file named <strings.h>

User input in C
syntax - scanf()
while working with strings we dont need to use the refernce operators
Limitations - scanf() does not consider spaces even tabes, it takes them as terminating character which means that it can only display a single word

IMP

Memory Address in C

It is the memory address assigned to varible
To access the memory address we use reference operator (&) and the result represnets where the variable is stored

The memory address is stored in the hexadecimal form.

You should also note that "&myAge" is often called a pointer.
A pointer basically store the memory address of a variable as its value. To print pointer values we use the %p format specifier.

Pointer In C

check code Pointers & Arrays

In C the name of the arrays is actually a pointer to the first element of the array - it is also know as the logical pointer

C Functions

A Function is a block of code which only runs when its called. You cann pass data, known as parameters, into a function. They are basicly used to perfrom certain actions and they are important for reusing code : Define the code once and use it many times.

Main() is a functon even printf() is a function and used when called

To declare a function the
void myFunction() // my function is the name of functuon and void is the retrun value function going to give
{
// code to be executed
}
declared functions are not called immediately but are saved for the later use.

Function Parameters in C

Parameters and Arguments

Information can be passed to function as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma.

Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.

IMP 

Passing Arrays as function Parameters - 
synatx


Notes on Parameters
Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.

Variable Scope in C


To Read more about : -

1. UNIX
