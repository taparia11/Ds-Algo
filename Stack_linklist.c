#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* top;

int isEmpty(){
    if(top==NULL)
        return 1;

    return 0;
}


int isFull(){

    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr==NULL)
    {
        return 1;
    }
    
    return 0;
}

void push(int n){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = top;
    top = temp;

}

int pop(){
    struct node* p;
    if (isEmpty()) 
    {
       return -1;
    }
            p = top;
            top = top->next;
            int x = p->data;
            free(p);
            return x;
            
}

int peek(int pos)
{
    struct node* ptr=top;
    for (int i = 0; i < pos-1 && ptr!=NULL; i++)
    {
        ptr = ptr->next;
    }
    
    if(ptr!=NULL)
        return ptr->data;
    else
        return -1;
}

int main() {
push(20);
push(25);
push(10);
push(15);
int l;
l = pop();

printf("Popped Number is %d\n",l);
l = peek(2);

printf("1 position Number is %d",l);




return 0;
}