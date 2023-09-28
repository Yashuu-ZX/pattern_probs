
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows --> ");
    scanf("%d",&r);
/*
we have to print
* * * *...
 * * *
  * *
   *
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=((r*2-1)-(i-1)*2);j++)
        {
            if (j%2 != 0)
            printf("*");
            else if (j%2 == 0)
            printf(" ");
            
        }
        //or --⇓
        // for (int j=1; j<=(r-i+1);j++)
        // printf("* ");
        printf("\n"); 
    }
/*
we have to print
1 2 3 4...
 1 2 3
  1 2
   1
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=(r-i+1);j++)
        {
            printf("%d ",j);
        }
        printf("\n"); 
    }
/*
we have to print
A B C D...
 A B C
  A B 
   A
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=(r-i+1);j++)
        {
            //ascii code of A is 65            
            //printf("%c",j+64); OR--⇙
            printf("%c ",'@'+j);
            //@ ascii value is 64 i.e. just before A
        }
        printf("\n"); 
    }
    return 0;
}