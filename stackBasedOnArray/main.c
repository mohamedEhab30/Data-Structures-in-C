#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
extern const int maxSize = 100000;
int main()
{
    printf("this App Print numbers in Last In First Out (LIFO) order\n");
    printf("Please Enter the Number of numbers\n");
    int n;
    scanf("%d",&n);
    printf("Please Enter %d Numbers\n",n);
    Stack s;
    createStack(&s);
    int num;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(num,&s);
    }
    printf("numbers in Last In First Out (LIFO) order : ");
    while(!stackEmpty(&s))
    {
        int e;
        stackTop(&e,&s);
        printf("%d ",e);
        pop(&e,&s);
    }
    return 0;
}
