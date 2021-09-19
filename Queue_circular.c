#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularqueue *p)
{
    if (p->f == p->r)
    {
        return 1;   //Queue is Empty
    }
    return 0;   //Queue is not Empty
}

int isFull(struct circularqueue *p)
{
    if ((p->r + 1 ) % p->size == p->f)
    {
        return 1;  // Queue overflow
    }
    return 0;  //queue underflow
}

void enqueue(struct circularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularqueue *q){
    int a;

    if (isEmpty(q))
    {
        printf("Queue is emoty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];    
    }
    return a;
}

int main()
{

    struct circularqueue q;
    q.size = 5;
    q.f = q.r = 0;
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