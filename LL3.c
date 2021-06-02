#include <stdio.h>
#include <stdlib.h>
struct node123
{
  int data;
  struct node123 *next;
};

struct node123 *head=NULL;

void create()
{
  struct node123* new_node =(struct node123*)malloc(sizeof(struct node123));
        struct node123 *ptr;
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


int find(struct node123 *ptr,int p,int r)
{  
  while(ptr!=NULL)
  {     
    if(p==ptr->data)
     return 1;
    ptr=ptr->next;
  }
  
  return 0;
}

int print(struct node123 *ptr,int p,int r)
{  
    printf("Linked List : ");
  while(ptr!=NULL)
  {     
      printf("->%d",ptr->data);
    if(p==ptr->data)
      printf("->%d",r);
    ptr=ptr->next;
  }
  
  return 0;
}
    

int main() {
  
  int i,j,n=3,d;
          scanf("%d",&n);
          
      for(i=0;i<n;i++)
      {
        create(); 
      }
  scanf("%d %d",&d,&j);
      if(find(head,d,j))
        print(head,d,j);
      else
        {
            printf("Node not found! \n");
            print(head,d,j);
        }
        
  
  return 0;
}