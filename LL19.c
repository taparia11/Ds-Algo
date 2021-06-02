#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *pre;
};
struct node1
{
  int data;
  struct node *next;
  struct node *pre;
};

struct node *head=NULL;
struct node1 *headd=NULL;

void classa()
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
                new_node->pre =NULL;
        }
        else
        {
                ptr=head;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =new_node;
                new_node->pre=ptr;
        }
}
void classb()
{
  struct node1* new_nod =(struct node1*)malloc(sizeof(struct node));
        struct node1 *pt;
        if(new_nod==NULL)
        {
                return;
        }
        scanf("%d",&new_nod->data );
        new_nod->next =NULL;
        if(headd==NULL)
        {
                headd=new_nod;
                new_nod->pre =NULL;
        }
        else
        {
                pt=headd;
                while(pt->next !=NULL)
                {
                        pt=pt->next ;
                }
                pt->next =new_nod;
                new_nod->pre=pt;
        }
}


void joint_class(struct node *ptr,struct node1 *ptrr)
{
  while(ptr != NULL  ||  ptrr != NULL)
  {
      struct node* temp=(struct node*)malloc(sizeof(struct node));
    if(ptrr==NULL)
        break;
    if(ptr->data <= ptrr->data)
    {
        if(ptr->next==NULL)
            if(ptrr==NULL)
              ptr = NULL;
            else
              goto l1;
        else
            ptr=ptr->next;
    }
    else
    {   l1:
        temp->data=ptrr->data;
        ptrr=ptrr->next;
        if(ptr->next==NULL)
        {
                temp->pre=ptr;
                temp->next=NULL;
                ptr->next=temp;
        }        
        else
        {
            temp->pre=ptr->pre;
            temp->next=ptr;
            ptr->pre->next=temp;
            ptr->pre=temp;
        }
    }
   }
}

void print_class(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("->%d",ptr->data);
        ptr=ptr->next;
    }
}

int main() {
  
  int i,j,n,d;
          scanf("%d",&n);
          scanf("%d",&d);
      for(i=0;i<n;i++)
      {
        classa();
      }
      for(i=0;i<d;i++)
      {
        classb();
      }
      printf("Class A : ");
      print_class(head);
      printf("\nClass B : ");
      print_class(headd);
      joint_class(head,headd);
      printf("\nJoint Class : ");
      print_class(head);
  
  return 0;
}