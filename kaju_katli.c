#include <stdio.h>
int main()
{
    int w,temp=0;
    printf("enter number of character in middle of kaju katli --> ");
    scanf("%d",&w);
/*
we have to print
   *
  * *
 * * * 
* * * *
 * * *
  * *
   *
*/
    for (int i = 1; i <= (w*2-1); i++)
    {
        for(int k = 1; k<=(w-i) || k<=(i-w); k++)
        {
            printf(" ");
        }
        for (int j = 1; j<=i && i<=w; j++)
        {
            printf("* ");
        }
        if (i>=(w+1) && i<=(w*2-1))
        {
            temp++;
        }
        if (i>=w+1)
        {
            for (int l = 1; l<=(i-temp*2); l++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}