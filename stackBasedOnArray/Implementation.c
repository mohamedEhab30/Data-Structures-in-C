#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void createStack(Stack *ps)
{
    ps->top=0;   //initialize the stack
}

void push(int e,Stack *ps)
{
    ps->entry[ps->top++]=e;  //push element into the stack
}

void pop(int *pe,Stack *ps)
{
    *pe=ps->entry[--ps->top];  //pop element from the stack
}

int stackFull(Stack *ps)
{
    return ps->top==100000;  // check if the Stack is full
}

int stackEmpty(Stack *ps)
{
    return !ps->top;  //check if the stack is empty
}

void stackTop(int *pe,Stack *ps)
{
    *pe=ps->entry[ps->top -1];  //get the element on top
}

int stackSize(Stack *ps)
{
    return ps->top;  //get number of elements into the stack
}

void clearStack(Stack *ps)
{
    //destroy all elements into the stack //stack looks initialized
    ps->top=0;
}
