#include <stdio.h>
int main()
{
/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
    int r,temp;
    printf("enter number of rows --> ");
    scanf("%d",&r);
    for (int i=1;i<=r*2-1;i++)
    {
        if (i<=r)
        {
            for (int j=1;j<=r-i;j++)
            printf(" ");
            for (int j=1;j<=2*i-1;j++)
            {
                if (j==1 || j==2*i-1)
                printf("*");
                else
                printf(" ");
                temp=2*i-3;
            }
        }
        if (i>r)
        {
            for (int j=1;j<=i-r;j++)
            printf(" ");
            for (int j=1;j<=temp;j++)
            {
                if (j==1 || j==temp)
                printf("*");
                else
                printf(" ");
            }
            temp -= 2;
        }
        printf("\n");
    }
    return 0;
}