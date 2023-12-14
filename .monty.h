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
#endif 
