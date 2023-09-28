#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows --> ");
    scanf("%d",&r);
/*
we have to print
***
 ***
  ***
*/
    for (int i = 1;i<=r;i++)
    {
        for (int k = 1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j = 1; j<=r ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
/*
we have to print
123
 123
  123
*/
    for (int i = 1;i<=r;i++)
    {
        for (int k = 1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j = 1; j<=r ; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
/*
we have to print
ABC
 ABC
  ABC
*/
    for (int i = 1;i<=r;i++)
    {
        for (int k = 1;k<=(i-1);k++)
        {
            printf(" ");
        }
        for (int j = 1; j<=r ; j++)
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