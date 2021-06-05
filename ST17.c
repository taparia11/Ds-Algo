#include <stdio.h>
#include <stdlib.h>

#define Empty printf("Stack is Empty");
#define Full printf("Stack Overflow");

struct node1{
    int size;
    int top;
    int *arr;
};

struct node{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct node1 *ptr)
{
    if(ptr->top == -1)
        return 1;

    return 0;
}

void Push(struct node1 *ptr, int val)
{
    if(isFull(ptr))
        Full
    else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
}

void Pop(struct node1 *ptr)
{
    if(isEmpty(ptr))
        Empty
    else
        ptr->top--;
        
}

int Peek(struct node1 *ptr, int i)
{
    int index = ptr->top - i + 1;
    if(index<0)
    return -1;
    else
    return ptr->arr[index];
}

void print(struct node1* ptr, int n){
    int i;
    for ( i = 0; i < n  && ptr+i != '\0'; i++)
    {
        printf("%d ",ptr+i);
    }
    
}

int main() {

    struct node1 *s= (struct stack*)malloc(sizeof(struct node1));
    sacnf("%d",&s->size);
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    int i,p;

    for ( i = 0; i < s->size; i++)
    {
        scanf("%d",&p);
        push(s,p);
        s->top++;
    }
    printf("The sequence of contents in stack\n");

    print(s,s->size);

    printf("\nThe contents in stack after reversal\n");

    for ( i = 1; i <= s->top+1; i++)
    {
        printf("%d ",Peek(s,i));
    }
    


return 0;
}