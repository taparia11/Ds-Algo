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
struct stack *ptr;
int isEmpty()
{
        if (ptr->top == -1)
                return 1;

        return 0;
}

int isFull()
{
        if (ptr->top == ptr->size - 1)
                return 1;

        return 0;
}

void Push(int val)
{
        if (isFull(ptr))
                Full 
        else
                {
                        ptr->top++;
                        ptr->arr[ptr->top] = val;
                }
}

void Pop()
{
        if (isEmpty(ptr))
                Empty else ptr->top--;
}

void isEven(){
        int i;
        for ( i = 0; i < ptr->size; i++)
        {
                if((ptr->arr[i] % 2) == 0)
                printf("%d\n",ptr->arr[i]);
        }
        
}

void isOdd(){
      int i;
        for ( i = 0; i < ptr->size; i++)
        {
                if(ptr->arr[i] % 2 != 0)
                printf("%d\n",ptr->arr[i]);
        }  
}

int main()
{
        struct stack *s = (struct stack *)malloc(sizeof(struct stack));
        s->top = -1;
        int n,j,i;
        scanf("%d %d", &n,&j);
       
        s->size = n;
        s->arr = (int *)malloc(s->size * sizeof(int));
        ptr = s;
for ( i = 0; i < n; i++)
{
        scanf("%d",&j);
        Push(j);
}
       isEven();
       isOdd();

        return 0;
}
