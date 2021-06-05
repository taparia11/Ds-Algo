#include <stdio.h>
#include <stdlib.h>

#define Empty printf("Stack is Empty");
#define Full printf("Stack Overflow");

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
        return 1;

    return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;

    return 0;
}

void Push(struct stack *ptr, int val)
{
    if(isFull(ptr))
        Full
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}

void Pop(struct stack *ptr)
{
    if(isEmpty(ptr))
        Empty
    else
        ptr->top--;
        
}

int Peek(struct stack *ptr, int i)
{
    int index = ptr->top - i + 1;
    if(index<0)
    return -1;
    else
    return ptr->arr[index];
}

int main() {
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    Push(sp,5);
    Push(sp,55);
    Push(sp,10);

    for (int j = 1; j <= sp->top+1; j++)
    {
        printf("In Position %d value is %d\n",j,Peek(sp,j));
    }
    

    

    return 0;
}