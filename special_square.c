#include <stdio.h>
int main()
{
    int n;printf("enter number --> ");scanf("%d",&n);int c = 2*n-1;
    int pat[c][c];
    for (int m=0 ;m<n ;m++)
    {
        for (int i=m ;i<c-m ;i++ )
        {
            for (int j=m;j<c-m ;j++)
            pat[i][j] = n-m;
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c;j++)
        printf("%d ",pat[i][j]);
        printf("\n");
    }
    return 0;
}