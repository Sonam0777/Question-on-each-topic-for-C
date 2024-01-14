#include <stdio.h>
#define M 3
#define N 3
int main()
{
    int a[M][N],i,j;
    
    printf("enter the elements of 1st matrix \n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int sum = 0;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("\nthe sum of elements of matrix is %d",sum);
    return 0;
}