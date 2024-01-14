#include <stdio.h>
#define M 3
#define N 4
int main()
{
    int A[M][N], B[N][M], AbyB[M][M], BbyA[N][N], row_mul_col=0;
    int i,j,k;
   printf("enter the elements of Matrix A of order %d*%d:",M,N);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nenter the elemetns of Matrix B of order %d*%d",N,M);
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            for(k=0;k<N;k++)
            {
                row_mul_col=row_mul_col+A[i][k]*B[k][j];
            }
            AbyB[i][j]=row_mul_col;
            row_mul_col = 0;
        }
    }

    printf("\nMatrix A*B:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%d\t",AbyB[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            for(k=0;k<M;k++)
            {
                row_mul_col=row_mul_col+A[i][k]*B[k][j];
            }
            BbyA[i][j]=row_mul_col;
            row_mul_col = 0;
        }
    }

    printf("\nMatrix A*B:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",BbyA[i][j]);
        }
        printf("\n");
    }
    return 0;
}