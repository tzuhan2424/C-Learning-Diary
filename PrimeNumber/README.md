# Prime Number

5/1
I think before jump directly into coding, I must know the structure.

1. include
`include <filename>`: Used for system header files or libraries that come with the compiler. The compiler searches for these files in its predefined directories.
`include "filename"`: Used for user-defined header files. The compiler searches for these files in the current directory first, then in the system directories.
2. int main()
return type
in main, return int, seems like is a standard
there are other return type, such as basic datatype(float..), void, you could return pointer as well(Cool)



3. Ok, so how do I get user input
/PrimeNumber/Test/get.c
scanf, printf  
https://www.geeksforgeeks.org/scanf-in-c/  

%d to accept input of integers.
%ld to  accept input of long integers  
%lld to accept input of long long integers
%f to accept input of real number.  
%c to accept input of character types.  
%s to accept input of a string.

Handle user input looks like way more complicated

4. datatype
/PrimeNumber/Task/type.c
talk about type, and array

should not upload unix exe file on github
- Task A: now, we could write a small program that allow user input number
and store in some array, and print the array after

5/2 Today try to finish Task A
```c 
 int number;
 scanf("%d", &number);
```
scanf require you put address, so you need &
what would scanf return
1: If scanf successfully reads an integer from the input and stores it in number, it returns 1, indicating one item was successfully read and assigned.
0: If scanf fails to read an integer (for example, if the user inputs non-numeric characters where an integer is expected), it returns 0, indicating that no items were successfully read and assigned.

5/5 Condition and loop
Task B: Condition
Let's practice some if-else, switch
Task B: prompt user to enter 1-12, and show the month
at the same time, I am learning how to use Vim.

Ok, let's write loop
while, do-while, for
Task C: Number guessing Game
Finished the Task C (5/6)





=====some backlog question=====
1.makefile(/document/makefile.md)
https://www3.nd.edu/~zxu2/acms60212-40212/Makefile.pdf


header
how to import function
condition
pointer
array
error handling

loop
is there other faster way to print arr? using pointer, or while?


