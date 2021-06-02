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
  struct node *temp;
  temp = (struct node * )malloc(sizeof(struct node));
  
  	scanf("%d",&temp->data);
  
  	if(head==NULL)
    {
      head=temp;
      temp->next=NULL;
    }
  else 
  {
    temp->next=head;
    while(temp->next->next!=NULL)
    {
      
        temp->next=temp->next->next;
    }
    
    temp->next->next=temp;
    temp->next=NULL;
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