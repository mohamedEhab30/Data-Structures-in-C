#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void createStack(Stack *ps)     //initialize the stack
{
    ps->top = NULL;
    ps->sz = 0;
}

stackNode *createStackNode(char e)      //create stack node
{
    stackNode *pn = (stackNode *)malloc(sizeof(stackNode));
    pn -> entry = e;
    pn -> nxt = NULL;
    return pn;
}

void stackTop(char *pn,Stack *ps)    //get the element on top
{
    *pn = ps -> top -> entry;
}

void push(char e,Stack *ps)     //push element into the stack
{
    stackNode *pn=createStackNode(e);
    pn -> nxt = ps -> top;
    ps -> top = pn;
    ps -> sz ++;
}

void pop(char *pe,Stack *ps)    //pop element from the stack
{
    stackNode *pn = ps -> top;
    *pe = pn -> entry;
    ps -> top = ps -> top -> nxt;
    free(pn);
    ps -> sz --;
}

int stackEmpty(Stack *ps)   //check if the stack is empty
{
    return ps->sz==0;
}

int stackSize(Stack *ps)     //get number of elements into the stack
{
    return ps->sz;
}

void clearStack(Stack *ps)      //destroy all elements into the stack //stack looks initialized
{
    stackNode *pn = ps -> top;
    while(pn)
    {
        pn = pn -> nxt;
        free(ps -> top);
        ps -> top = pn;
    }
    ps -> sz = 0;
}

void traverseStack(Stack *ps)    //traverse the stack
{
    for(stackNode *pn = ps->top ; pn ; pn = pn -> nxt)
        printf("%c ", pn -> entry);
}

