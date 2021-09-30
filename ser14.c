#include<stdio.h>

int main()
{
    int i,j,a,b,c,n;
    scanf("%d",&n);
    int arr[n][3],sum[n];

    for ( i = 0; i < n; i++)
    {   sum[i]=0;
        for ( j = 0; j < 3; j++)
        {
           scanf("%d",&arr[i][j]);
            sum[i]+=arr[i][j];
        } 
    }

     for ( i = 0; i < n; i++)
    {   
        for ( j = 0; j < 3; j++)
        {
           if (sum[i]>sum[j])
           {
               a=sum[i];
               sum[i]=sum[j];
               sum[j]=a;
           }
           
        } 
    }
        
     for ( i = 0; i < n; i++)
    {   
        for ( j = 0; j < 3; j++)
        {
           if (sum[i]==sum[j])
           {
               sum[i]=0;
               sum[j]=0;
           }
           
        } 
    }

    b=0;

     for ( i = 0; i < n; i++)
    {   if (sum[i]>0)
    {
        b++;
    }
    
    printf("%d",b);

return 0;

}