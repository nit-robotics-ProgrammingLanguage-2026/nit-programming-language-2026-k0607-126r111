#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
int count = 0;
    scanf("%d", &n);
 if(n < 0)
 {
   printf("NG");
   return 0;

 }
 
 for (i=0;i<=50;i++) 
 {
    for(j=0; j<=50;j++)
    {
        if(i !=j && i+j ==n)
        {
            count ++;
        }
    }
   }
 
printf("%d",count );
   return 0;
}