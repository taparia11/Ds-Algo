#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

struct Node *head=NULL;

void Create()
{
  struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
        struct Node *ptr;
        if(new_node==NULL)
        {
                return;
        }
        scanf("%d",&new_node->data );
        new_node->next =NULL;
        if(head==NULL)
        {
                head=new_node;
        }
        else
        {
                ptr=head;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =new_node;
        }
}


int main()
{
    
}