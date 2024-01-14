#include <stdio.h>
#define M 4
#define N 4
int main()
{
    int i,j,a[M][N];
    printf("enter the elements of matrix : \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nOriginal Matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(j>i)
            {
                a[i][j]=0;
            }
        }
    }

    printf("\nLower triangular matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}