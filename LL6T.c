#include <stdio.h>
#include <stdlib.h>

struct node123
{
  int data;
  struct node123* next;
};

struct node123* head=NULL;

void create()
{
  struct node123* ptr;
  struct node123* temp = (struct node123*) malloc(sizeof(struct node123));
  scanf("%d",&temp->data);
  temp->next=NULL;
  
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
  ptr=head;
  	while(ptr->next!=NULL)
    {
    	ptr=ptr->next;
    }
  ptr->next=temp;
  }
}

void add(int j,int p)
{
  struct node123* ptr;
  struct node123* temp = (struct node123*) malloc(sizeof(struct node123));
  temp->data=p;
  temp->next=NULL;
  ptr=head;
  	while(ptr->data!=j && ptr!=NULL)
    {
    	ptr=ptr->next;
    }
  if(ptr->data==j)
  {
  temp->next=ptr->next;
  ptr->next=temp;
  }
  else
    printf("Node not found! ");
  
}

void print()
{
  struct node123* ptr;
  ptr=head;
  while(ptr!=NULL)
  {
    printf("->%d",ptr->data);
    ptr=ptr->next;
  }
  
}

int main() {
	int n,i,j,p;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    create();
  }
  scanf("%d %d",&j,&p);
  add(j,p);
  printf("Linked List : ");
  print();
	return 0;
}