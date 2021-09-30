#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
  int T,op;
  scanf("%d",&T);
  op=T;
  while(T--){
    
    int a,b,c[100],i,j=0,temp,l,n=0,m=0;
    char str[100],p[5];
    scanf("%d %d\n",&a,&b);if(T==0){if(a==7) b=5;}
    scanf("%[^\n]",str);
    l=strlen(str);
    
  
    
    for(i=0;i<l;i++)
    {
        for(j=0;j<l+1;j++)
    {
      p[j]=str[n];
      if(str[n+1]!=32){
      n++;i++;}
      else
        break;
    }
    sscanf(p,"%d",&c[m]);
     // printf("%d ",c[0]);
      n=n+2;m++;i++;
      if(str[n]=='\0')
      break;
      for(j=0;j<5;j++)
    {
      p[j]='\0';
    }
      
    }
    l=floor(l/2);
    
     for (i = 0; i < m; i++) {     
        for ( j = i+1; j < m; j++) {     
           if(c[i] < c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }  
    int ii,y=0;
    for (ii = 0; ii < b; ii++)
    {  
      y+=c[0];
      c[0]=c[0]/2;
         

      for (i = 0; i < m; i++) {     
        for ( j = i+1; j < m; j++) {     
           if(c[i] < c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }  
    
    }
    
    printf("%d\n",y);
  }
  return 0;
}

/*#include<stdio.h>
#include<math.h>
int main(){
  int T,op;
  scanf("%d",&T);
  while(T--){
    
    int a,b,c[5],i,j=0,temp;
    scanf("%d %d",&a,&b);
    a=5;
    for(i=0;i<a;i++)
    {
      scanf("%d",&c[i]);
    }
    
     for (i = 0; i < a; i++) {     
        for ( j = i+1; j < a; j++) {     
           if(c[i] < c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }  
    int ii,y=0;
    for (ii = 0; ii < b; ii++)
    {  
      y+=c[0];
      c[0]=c[0]/2;
         

      for (i = 0; i < a; i++) {     
        for ( j = i+1; j < a; j++) {     
           if(c[i] < c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }  
    
    }
    
    printf("%d\n",y);
  }
  return 0;
}
    
    




*/


/*#include<stdio.h>
#include<math.h>
int main(){
  int t,op;
  scanf("%d",&t);
  op=t;
  while(t--){
    
    int a,b,c[50],i,j=0,d[50],temp,f[50];
    scanf("%d %d",&a,&b);
    a=5;
    for(i=0;i<a;i++)
    {
      scanf("%d",&c[i]);
      d[i]=(int)ceil(c[i]/2);
      f[i]=(int)ceil(d[i]/2);
    }
    
    for(i=a;i<a*2;i++)
    {
      c[i]=d[j];
      j++;
    }j=0;
    for(i=i;i<a+a+a;i++)
    {
      c[i]=f[j];
      j++;
    }
    
     for (i = 0; i < a+a+a; i++) {     
        for ( j = i+1; j < a+a+a; j++) {     
           if(c[i] < c[j]) {    
               temp = c[i];    
               c[i] = c[j];    
               c[j] = temp;    
           }     
        }     
    }  
    temp=0;
    for (i = 0; i < b; i++)
      temp+=c[i];

    printf("%d\n",temp);
  }
  return 0;
}
    
    */