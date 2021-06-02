#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *head=NULL;

void Create()
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
{  static int count=0,r=1;
    if(r==0)
    count++;
  while(ptr!=NULL)
  {     if(1==count)
      printf("->%d",ptr->data);
    if(p==ptr->data)
    {
        count++;
        break;
    }
    ptr=ptr->next;
  }
  if(count==0)
  r--;
  return count;
}
    

int main() {
  
  int i,j,n=3,d;
          scanf("%d",&n);
          
      for(i=0;i<n;i++)
      {
        Create(); 
      }
  scanf("%d",&d);
  
      j=find(head,d);
        if(j!=1)
        printf("Invalid Node! \n");
     printf("Linked List : ");
     j=find(head,d);
  
  return 0;
}