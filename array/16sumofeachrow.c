#include <stdio.h>
#define M 4
#define N 4

int main()
{
    int n[M][N],i,j;
    printf("\nenter the elements of matrix: ");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }    

    int sum;
    for(i=0;i<M;i++)
    {
        sum=0;
        for(j=0;j<N;j++)
        {
            sum = sum + n[i][j];
        }
        printf("\nthe sum of %d row is %d",i+1,sum);
    }
    return 0;
}