
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You are not allowed to use any kind of loops
You are not allowed to use static variables

# File: 0-puts_recursion.c
0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints a string, followed by a new line.

Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion

# File: 1-print_rev_recursion.c
1. Why is it so important to dream? Because, in my dreams we are together
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that prints a string in reverse.

Prototype: void _print_rev_recursion(char *s);

julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
reklaW notloC

# File: 2-strlen_recursion.c
2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the length of a string.

Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.



# File: 3-factorial.c
3. You mustn't be afraid to dream a little bigger, darling
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the factorial of a given number.

Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

# File: 4-pow_recursion.c
4. Once an idea has taken hold of the brain it's almost impossible to eradicate
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the value of x raised to the power of y.

Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.


# File: 5-sqrt_recursion.c
5. Your subconscious is looking for the dreamer
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.



# File: 6-is_prime_number.c
 6. Inception. Is it possible?
mandatory
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

Prototype: int is_prime_number(int n);




# File: 100-is_palindrome.c 
7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
\#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a function that returns 1 if a string is a palindrome and 0 if not.

Prototype: int is_palindrome(char *s);
An empty string is a palindrome


# File: 101-wildcmp.c
8. Inception. Now, before you bother telling me it's impossible...
\#advanced
Score: 0.0% (Checks completed: 0.0%)
Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

Prototype: int wildcmp(char *s1, char *s2);
s2 can contain the special character *.
The special char * can replace any string (including an empty string)













*THE END*