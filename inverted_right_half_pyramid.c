#include <stdio.h>
int main()
{
    int r;
    printf("enter number of rows --> ");
    scanf("%d",&r);
/*
we have to print
****...
***
**
*
*/
    for (int i=1;i<=r;i++)
    {
        for(int j = 1;j<=(r-i+1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
/*
we have to print
1234...
123
12
1
*/
    for (int i=1;i<=r;i++)
    {
        for(int j = 1;j<=(r-i+1);j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
/*
we have to print
ABCD...
ABC
AB
A
*/
    for (int i=1;i<=r;i++)
    {
        for(int j = 1;j<=(r-i+1);j++)
        {
            //ascii code of A is 65            
            //printf("%c",j+64); OR--⇙
            printf("%c",'@'+j);
            //@ ascii value is 64 i.e. just before A
        }
        printf("\n");
    }
    return 0;
}