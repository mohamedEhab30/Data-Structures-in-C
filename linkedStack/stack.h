#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef struct stacknode
{
    char entry;
    struct stackNode *nxt;
}stackNode;

typedef struct stack
{
    stackNode *top;
    int sz;
}Stack;
void createStack(Stack *ps);        //initialize the stack
void stackTop(char *pn,Stack *ps);  //get the element on top
void push(char e,Stack *ps);        //push element into the stack
void pop(char *pe,Stack *ps);       //pop element from the stack
int stackEmpty(Stack *ps);          //check if the stack is empty
int stackSize(Stack *ps);           //get number of elements into the stack
void clearStack(Stack *ps);         //destroy all elements into the stack //stack looks initialized
void traverseStack(Stack *ps);      //traverse the stack
#endif // STACK_H_INCLUDED
