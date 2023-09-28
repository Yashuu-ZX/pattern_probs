
#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows --> ");
    scanf("%d",&r);
/*
we have to print
   *
  * *
 * * *
* * * *...
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(r-i);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=(i*2-1);j++)
        {
            if (j%2 != 0)
            printf("*");
            else if (j%2 == 0)
            printf(" ");
           
        } 
        //or --⇓
        // for (int j=1; j<=i;j++)
        // printf("* ");
        printf("\n"); 
    }
/*
we have to print
   1
  1 2
 1 2 3
1 2 3 4...
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(r-i);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n"); 
    }
/*
we have to print
   A
  A B
 A B C
A B C D...
*/
    for (int i=1;i<=r;i++)
    {
        for (int k=1;k<=(r-i);k++)
        {
            printf(" ");
        }
        for (int j=1; j<=i;j++)
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