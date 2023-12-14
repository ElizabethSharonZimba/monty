#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct
{
    FILE *file;
    char *content;
    char *arg;
    int lifi;
} bus_t;

extern bus_t bus;

void free_stack(stack_t *head);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void print_stack(stack_t *head);
void f_push_pall(stack_t **head, unsigned int line_number, char *opcode);
void rotate_stack_right(stack_t **head, unsigned int line_number);
void rotate_stack_left(stack_t **head, unsigned int line_number);
void set_stack_format(stack_t **head, unsigned int line_number);
void set_queue_format(stack_t **head, unsigned int line_number);
void print_string_at_top(stack_t **head, unsigned int line_number);
void print_char_at_top(stack_t **head, unsigned int line_number);
void do_operations(FILE *file);
void mod_top_two(stack_t **head, unsigned int line_number);
void multiply_top_two(stack_t **head, unsigned int line_number);
void divide_top_two(stack_t **head, unsigned int line_number);
void subtract_top_two(stack_t **head, unsigned int line_number);
void do_nothing(stack_t **head, unsigned int line_number);
void add_top_two(stack_t **head, unsigned int line_number);
void swap_top_two(stack_t **head, unsigned int line_number);
void remove_top(stack_t **head, unsigned int line_number);
void pint_stack(stack_t **head, unsigned int line_number);

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct bus_s
{
    int lifi;
    FILE *file;
    char *content;
    char *arg;
} bus_t;

extern bus_t bus;

void free_stack(stack_t *head);
void print_stack(stack_t *head);
void addnode(stack_t **head, int n);

void set_stack_format(stack_t **head, unsigned int line_number);
void set_queue_format(stack_t **head, unsigned int line_number);
void addqueue(stack_t **head, int n);

#endif
