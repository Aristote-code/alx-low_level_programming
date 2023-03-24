Readme for Variadic Functions Tasks
This directory contains four C files that implement different functions using variadic functions.

0-sum_them_all.c
This file defines a function sum_them_all that takes in an unsigned integer n followed by a variable number of integers and returns the sum of all the integers. If n is 0, the function returns 0. The prototype for the function is as follows:

c
Copy code
int sum_them_all(const unsigned int n, ...);
To test the function, compile 0-main.c along with 0-sum_them_all.c and run the resulting executable. The expected output is:

yaml
Copy code
1122
500
1-print_numbers.c
This file defines a function print_numbers that takes in a string separator followed by an unsigned integer n and a variable number of integers. The function prints out the integers separated by the separator string, and ends with a newline character. If the separator string is NULL, it is not printed. The prototype for the function is as follows:

c
Copy code
void print_numbers(const char *separator, const unsigned int n, ...);
To test the function, compile 1-main.c along with 1-print_numbers.c and run the resulting executable. The expected output is:

Copy code
0, 98, -1024, 402
2-print_strings.c
This file defines a function print_strings that takes in a string separator followed by an unsigned integer n and a variable number of strings. The function prints out the strings separated by the separator string, and ends with a newline character. If a string is NULL, (nil) is printed in its place. The prototype for the function is as follows:

c
Copy code
void print_strings(const char *separator, const unsigned int n, ...);
To test the function, compile 2-main.c along with 2-print_strings.c and run the resulting executable. The expected output is:

Copy code
Jay, Django
3-print_all.c
This file defines a function print_all that takes in a string format followed by a variable number of arguments of different types. The function prints out each argument according to the format string, which can contain the following characters:

c for a character
i for an integer
f for a float
s for a string (if the string is NULL, (nil) is printed instead)
Any other characters in the format string are ignored. The function ends with a newline character. The prototype for the function is as follows:

c
Copy code
void print_all(const char * const format, ...);
To test the function, compile 3-main.c along with 3-print_all.c and run the resulting executable. The expected output is:

css
Copy code
B, 3, stSchool