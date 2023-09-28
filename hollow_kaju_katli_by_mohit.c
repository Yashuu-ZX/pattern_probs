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
    int r;
    printf("enter number of rows --> ");
    scanf("%d",&r);
    for (int i=1;i<=r*2-1;i++)
    {
        int temp;
        if(i<=r)
        temp = r-i;
        else
        temp= i-r;
        for (int j=1; j<=temp;j++)
        printf(" ");
        printf("*");
        if(i<=r){
        for(int k=1;k<=((2*(i-1))-1);k++)
        printf(" ");
        if(i!=1)
        printf("*");
        }
        else{
        for(int k=1;k<=(2*(2*r-i-1)-1);k++)
        printf(" ");
        if(i!=(2*r-1))
        printf("*");
        }
        printf("\n");
    }
    return 0;
}