#include <stdio.h>
#define M 4
#define N 4
int main()
{
    int n[M][N],i,j;
    printf("enter the elements of first matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }

    printf("\nOriginal Matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }

    /* for(i=1;i<M;i++)
    {
        for(j=0;j<i;j++)
        {
            n[i][j]=0;
        }
    } */
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i>j)
            {
                n[i][j]=0;
            }
        }
    }

    printf("\nafter upper triangular matrix: \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    return 0;
}