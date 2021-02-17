#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct stack
{
    int entry[100000];
    int top;
} Stack;
void createStack(Stack *ps);        //initialize the stack
void push(int e,Stack *ps);         //push element into the stack
void pop(int *pe,Stack *ps);        //pop element from the stack
int stackFull(Stack *ps);           // check if the Stack is full
int stackEmpty(Stack *ps);          //check if the stack is empty
void stackTop(int *pe,Stack *ps);   //get the element on top
int stackSize(Stack *ps);           //get number of elements into the stack
void clearStack(Stack *PS);         //destroy all elements into the stack

#endif // STACK_H_INCLUDED
