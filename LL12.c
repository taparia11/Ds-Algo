#include <stdio.h>
#include <stdlib.h>

struct node 
{
  int data;
  struct node *next;
};

struct node *head=NULL;

void insert()
{
  struct node *new_node =(struct node *)malloc(sizeof(struct node));
  
  	scanf("%d",&new_node->data);
  
  	if(head==NULL)
    {
      head=new_node;
      new_node->next=NULL;
    }
  else 
  {
    new_node->next=head;
    while(new_node->next->next!=NULL)
    {
      
        new_node->next=new_node->next->next;
    }
    
    new_node->next->next=new_node;
    new_node->next=NULL;
  }
}

_Bool find(struct node *ptr,int p)
{
  while(ptr!=NULL)
  {
    if(ptr->data==p)
      return 1;
    ptr=ptr->next;
  }
  
  return 0;
}
    

int main() {
  
  int i,j,n;
  		scanf("%d",&n);
 	 for(i=0;i<n;i++)
 	 {
 	   insert();
 	 }
    	scanf("%d",&j);
  	if(find(head,j))
  	  printf("Yes");
 	 else
  	  printf("No");
  
  return 0;
}