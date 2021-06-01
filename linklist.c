#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void print(struct Node* ptr)
{
    while(ptr->next != NULL)
    {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d -> ",ptr->data);
}
int main()
{
    struct Node *head;
    struct Node *second;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    scanf("%d",&head->data);
    head->next = second;
   scanf("%d",&second->data);
    second->next = NULL;

    print(head);

return 0;
}