#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Empty printf("Stack is Empty");
#define Full printf("Stack Overflow");

struct stack
{
    int size;
    int top;
    char *arr;
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

char Pop(struct stack *ptr)
{   char l;
    if(isEmpty(ptr))
        Empty
    else{
        l=ptr->arr[ptr->top];
        ptr->top--;
    }
        
        return l;
}

int Peek(struct stack *ptr, int i)
{
    int index = ptr->top - i + 1;
    if(index<0)
    return -1;
    else
    return ptr->arr[index];
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}

int stackBottom(struct stack* sp){
    return sp->arr[0];
}


int precedence(char ch){
     if(ch == '*' || ch == '/')
        return 3;
    else if(ch == '+' || ch == '-')
        return 2;
    else
        return 0;  
}

int isOperator(char ch){
    if(ch == '+' || ch == '-'  || ch == '*'  || ch == '/' || ch == '^')
        return 1;
    else
        return 0;
}

char * infixtopostfix(char* infix){
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char* postfix = (char*)malloc((strlen(infix)+1) * sizeof(char));
    int i=0;
    int j=0;

    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            i++;j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))    
            {
                Push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = Pop(sp);
                j++;
            }
            
            
        }
        
    }

    while (!isEmpty(sp))
    {
        postfix[j] = Pop(sp);
        j++;
    }

    postfix[j] = '\0';
    return postfix;
    
    
}

int main() {

    char *infix = "a+b*c-d";

    
    printf("%s",infixtopostfix(infix));
    

    return 0;
}