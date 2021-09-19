#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *p)
{
    if (p->f != p->r)
    {
        return 0;
    }
    return 1;
}

int isFull(struct queue *p)
{
    if (p->size - 1 != p->r)
    {
        return 0;
    }
    return 1;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    int a;

    if (isEmpty(q))
    {
        printf("Queue is emoty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];    
    }
    return a;
}

int main()
{

    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    
    printf("%d has been removed from queue\n",dequeue(&q));
    printf("%d has been removed from queue\n",dequeue(&q));
    printf("%d has been removed from queue\n",dequeue(&q));
    
    if (isEmpty(&q))
     {
            printf("Queue is Empty\n");
     }
    return 0;
}