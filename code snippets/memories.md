Stack Memory :-

1. Stores function calls, local variables.
2. Follow LIFO
3. Automatically allocated and deallocated.
4. Limited Size - Stack overflow if too many recursive calls.

Heap Memory :- 

1. Used for dynamic memory allocation (malloc, new)
2. Manually managed (must be freed at the end)
3. Larger than stack but slower

Data Segment :-

1. Stores global and static and constant Variables
2. Two parts - 
    a. Initialized data segment - stores global/static varibales with assigned values
    b. Uninitialized Data Segments (BSS) - Stores global/static variables with no assigned values(default 0)