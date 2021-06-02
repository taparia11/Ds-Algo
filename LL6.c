#include <stdio.h>
#include <stdlib.h>

struct Node 
{
  int data;
  struct Node *next;
};

struct Node *start=NULL;

void insert()
{
  struct Node *temp;
  temp = (struct Node * ) malloc(sizeof(struct Node));
  
  	scanf("%d",&temp->data);
  
  	if(start==NULL)
    {
      start=temp;
      temp->next=NULL;
    }
  else 
  {
    temp->next=start;
    while(temp->next->next!=NULL)
    {
      
        temp->next=temp->next->next;
    }
    
    temp->next->next=temp;
    temp->next=NULL;
  }
}

void find(struct Node *ptr,int p)
{
    printf("Linked List : ");  
  while(ptr!=NULL)
  {
      printf("->%d",ptr->data);
    ptr=ptr->next;
  }
}

void delete_begin(int k)
{
    while(k!=0)
    {
        struct node *ptr;
        
        {
                ptr=start;
                start=start->next ;
                
                free(ptr);
        }
    }
}


int main() {
  
  int i,j,n;
  		scanf("%d",&n);
 	 for(i=0;i<n;i++)
 	 {
 	   insert();
 	 }
    	scanf("%d",&j);
        delete_begin(j);
  	    find();
  	 
  
  return 0;
}