#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int isDigit(char c)
{
    return (c>='0' && c<='9');
}

int precedent(char op1,char op2)
{
    if(op1 == '$') return 1;
    if(op1 == '*'||op1 == '/')
        return op2 != '$';
    if(op1 == '+' || op1 == '-')
        return op2 !='$' && op2 != '*' && op2 != '/';
    return 0;
}

void infixToPostfix(char infix[],char postfix[])
{
    int j=0;
    char op,c;
    Stack s;
    createStack(&s);
    for(int i=0; (c = infix[i]) != '\0'; i++)
    {
        if(isDigit(c))
            postfix[j++]=c;
        else
        {
            if(!stackEmpty(&s))
            {
                stackTop(&op,&s);
                while(!stackEmpty(&s)&&precedent(op,c))
                {
                    pop(&op,&s);
                    postfix[j++] = op;
                    if(!stackEmpty(&s))
                        stackTop(&op,&s);
                }

            }
            push(c,&s);
        }
    }
    while(!stackEmpty(&s))
    {
        pop(&op,&s);
        postfix[j++] = op;
    }
    postfix[j] = '\0';
}
int main()
{
    char infix[]="1+2*3$4/5+6";
    char postfix[80];
    infixToPostfix(infix, postfix);
    printf("%s\n", postfix);
}
