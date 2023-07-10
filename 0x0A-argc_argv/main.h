#ifndef MAIN_H
#define MAIN_H

#include <stdio.h> /* Include necessary standard library headers */

/* Function prototypes */
int _putchar(char c);
int main(int argc, char *argv[]);
void print_program_name(char *name);
void print_argument_count(int count);
void print_arguments(char **args);
int multiply(int a, int b);
int add_positive_numbers(int argc, char **argv);

#endif /* MAIN_H */
