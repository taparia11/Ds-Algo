#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *head=NULL;

void insert_end()
{
  struct node* new_node =(struct node*)malloc(sizeof(struct node));
        struct node *ptr;
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


int find(struct node *ptr,int p)
{   int count=0;
    printf("Linked list : ");
  while(ptr!=NULL)
  {     
      printf("-->%d",ptr->data);
    if(p==ptr->data)
      count++;
    ptr=ptr->next;
  }
  
  return count;
}
    

int main() {
  
  int i,j,n=3,d;
          scanf("%d",&n);
          
      for(i=0;i<n;i++)
      {
        insert_end(); 
      }
  scanf("%d",&d);
  
      j=find(head,d);
        printf("\nCount of %d : %d",d,j);
     
  
  return 0;
}