#include <stdio.h>

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    scanf("%d",&r);
    scanf("%d",&c);
    if (r>=1&&c<=3)
    {
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
       {
           scanf("%d",&a[i][j]);
       }

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
       {
           scanf("%d",&b[i][j]);
       }
    printf("\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
        {
            
            printf("%d ", a[i][j] + b[i][j]);
            if(j == c - 1)
                printf("\n");
        }
    }
    return 0;
}
