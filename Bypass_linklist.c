#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,i,p,rn;
    scanf("%d",&n);
    int arr[n];
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d %d",&p,&rn);
    if(p<=n+1  &&  p>0)
        p=p;  
    else
    printf("Invalid position!\n");
    printf("Linked List : ");
    for ( i = 1; i <= n; i++)
    {   
        if(i==p)
        printf("->%d",rn);
        
        printf("->%d",arr[i]);
    }

    
return 0;
}